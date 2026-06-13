// Last updated: 3/6/2026, 12:39:46 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var findNonMinOrMax = function(nums) {
    if(nums.length==1 || nums.length==2) return -1
    let min = Infinity;
    let max = -Infinity;
    for(let i = 0; i < nums.length; i++){
        if(nums[i]<min){
            min = nums[i];
        }
        if(nums[i]>max){
            max = nums[i];
        }
    }
    for(let i = 0; i < nums.length; i++){
        if(nums[i]!=min&&nums[i]!=max){
            return nums[i];
        }
    }
};