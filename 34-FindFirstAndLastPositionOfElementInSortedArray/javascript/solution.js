// Last updated: 3/6/2026, 12:46:19 AM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let ans = [];
    ans.push(nums.indexOf(target));
    ans.push(nums.lastIndexOf(target))
    return ans
};