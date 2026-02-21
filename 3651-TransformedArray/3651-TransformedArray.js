// Last updated: 3/6/2026, 12:39:11 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var constructTransformedArray = function(nums) {
    let result = [];
    for (let i = 0; i < nums.length; i++) {
        let index = (i + nums[i]) % nums.length;
        if (index < 0) {
            index = nums.length + index;
        }
        result.push(nums[index]);
    }
    return result
};