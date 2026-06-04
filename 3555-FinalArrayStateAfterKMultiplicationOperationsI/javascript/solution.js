// Last updated: 3/6/2026, 12:39:17 AM
/**
 * @param {number[]} nums
 * @param {number} k
 * @param {number} multiplier
 * @return {number[]}
 */
var getFinalState = function(nums, k, multiplier) {
    let i = 1;
    while(i<=k){
        let index = nums.indexOf(Math.min(...nums));
        nums[index] *= multiplier;
        i++
    }
    return nums
};