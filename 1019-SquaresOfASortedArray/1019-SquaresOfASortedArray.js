// Last updated: 3/6/2026, 12:45:15 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function (nums) {
    for (let i = 0; i < nums.length; i++) {
        nums[i] = nums[i] * nums[i];
    }
    nums = nums.sort((a, b) => a - b);
    return nums
};