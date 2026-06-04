// Last updated: 3/6/2026, 12:45:39 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
    let max = 0;
    let arr = []
    let strak = 0;
    for (let i of nums) {
        if (i == 1) {
            strak++
        }
        else {
            strak = 0
        }
        max = Math.max(max, strak)
    }
    return max
};