// Last updated: 3/6/2026, 12:39:09 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var transformArray = function(nums) {
    for(let i in nums){
        if(nums[i] % 2 === 0){
            nums[i] = 0
        }
        else{
            nums[i] = 1
        }
    }
    return nums.sort((a,b) => a - b)
};