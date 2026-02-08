// Last updated: 3/6/2026, 12:45:52 AM
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function (nums, k) {
    nums = nums.sort((a, b) => b - a);
    return nums[k - 1];
};