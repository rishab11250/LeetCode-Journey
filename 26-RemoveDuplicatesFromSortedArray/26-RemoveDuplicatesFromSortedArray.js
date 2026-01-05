// Last updated: 3/6/2026, 12:46:25 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
    let obj = {};
    let i = 0;
    for (let int of nums) {
        if (obj[int] == undefined) {
            obj[int] = 1;
            nums[i] = int;
            i++;
        }
    }
    return i
};