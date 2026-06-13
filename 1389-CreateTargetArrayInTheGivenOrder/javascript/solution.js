// Last updated: 3/6/2026, 12:44:56 AM
/**
 * @param {number[]} nums
 * @param {number[]} index
 * @return {number[]}
 */
var createTargetArray = function(nums, index) {
    let ans = []
    for(let i = 0; i < nums.length; i++){
        ans.splice(index[i], 0, nums[i])
    }
    return ans
};