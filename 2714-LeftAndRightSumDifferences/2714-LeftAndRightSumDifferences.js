// Last updated: 3/6/2026, 12:40:00 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function(nums) {
    let left = [0];
    let right = [0];
    for(let i = 1 ; i < nums.length; i++){
        left.push(nums[i-1] + left[left.length - 1]);
    }
    for(let i = nums.length - 2; i >= 0; i--){
        right.push(nums[i+1] + right[right.length - 1]);
    }
    right = right.reverse();
    for(let i = 0; i < left.length; i++){
        left[i] = Math.abs(left[i] - right[i]);
    }
    return left
};