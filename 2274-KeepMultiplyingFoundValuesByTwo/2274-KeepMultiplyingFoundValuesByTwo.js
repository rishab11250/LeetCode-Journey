// Last updated: 3/6/2026, 12:40:33 AM
/**
 * @param {number[]} nums
 * @param {number} original
 * @return {number}
 */
var findFinalValue = function(nums, original) {
    // nums = nums.sort((a,b)=>a-b)
    // for(let i=0;i<nums.length;i++){
    //     if(nums[i] == original){
    //         original = original * 2
    //     }
    // }
    while(nums.includes(original)){
        original = original *2
    }
    return original
};