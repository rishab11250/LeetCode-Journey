// Last updated: 3/6/2026, 12:44:48 AM
/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let i = 0;
    let j = n
    let arr = []
    for(i,j;j<nums.length;i++,j++){
        arr.push(nums[i]);
        arr.push(nums[j]);
    }
    return arr
};