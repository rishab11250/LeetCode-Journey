// Last updated: 3/6/2026, 12:39:20 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function(nums) {
    let count = 0
    for(let i = 0; i < nums.length; i++){
        if(nums[i]%3 != 0){
            count++
        }
    }
    return count
};