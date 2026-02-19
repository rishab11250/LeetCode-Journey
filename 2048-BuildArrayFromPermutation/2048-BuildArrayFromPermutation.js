// Last updated: 3/6/2026, 12:40:54 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var buildArray = function(nums) {
    let ans = [];
    for(let i in nums){
        ans.push(nums[nums[i]])
    }
    return ans
};