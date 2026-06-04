// Last updated: 3/6/2026, 12:46:08 AM
/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    for(let i = 0;i<nums.length;i++){
        for(let j = i+1;j<nums.length;j++){
            if(nums[i]>nums[j]){
                [nums[i],nums[j]] = [nums[j],nums[i]]
            }
        }
    }
};