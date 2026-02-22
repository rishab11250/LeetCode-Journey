// Last updated: 3/6/2026, 12:41:39 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let ans = []
    for(let i = 0; i < nums.length; i++){
        let sum = 0;
        for(let j = 0; j <= i; j++){
            sum += nums[j]
        }
        ans.push(sum)
    }
    return ans
};