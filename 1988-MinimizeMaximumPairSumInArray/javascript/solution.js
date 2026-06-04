// Last updated: 3/6/2026, 12:40:57 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minPairSum = function(nums) {
    let max = -Infinity;
    nums = nums.sort((a,b)=>a-b);
    let i = 0; let j = nums.length - 1;
    while(i < j){
        max = Math.max(max, nums[i] + nums[j]);
        i++;
        j--;
    }
    return max
};