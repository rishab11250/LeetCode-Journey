// Last updated: 3/6/2026, 12:39:02 AM
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minOperations = function(nums, k) {
    let sum = 0;
    for(let num of nums){
        sum = sum + num;
    }
    if(sum==k){
        return 0;
    }
    else if(sum>k){
        return sum%k
    }
    else{
        return sum
    }
};