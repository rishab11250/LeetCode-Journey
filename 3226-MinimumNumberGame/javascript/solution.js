// Last updated: 3/6/2026, 12:39:30 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberGame = function (nums) {
    let arr = [];
    while (nums.length > 0) {
        let temp = []
        let index = nums.indexOf(Math.min(...nums));
        temp.push(nums[index]);
        nums.splice(index, 1);
        index = nums.indexOf(Math.min(...nums));
        temp.unshift(nums[index]);
        nums.splice(index, 1);
        arr.push(...temp);
    }
    return arr
};