// Last updated: 3/6/2026, 12:45:59 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
    return nums.indexOf(Math.max(...nums))
};