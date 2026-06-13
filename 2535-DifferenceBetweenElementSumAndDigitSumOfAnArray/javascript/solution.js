// Last updated: 3/6/2026, 12:40:06 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function (nums) {
    let sumofNums = 0;
    let sumofDigits = 0;
    for (let i in nums) {
        sumofNums += nums[i];
        while (nums[i] > 0) {
            sumofDigits += nums[i] % 10;
            nums[i] = Math.floor(nums[i] / 10);
        }
    }
    return Math.abs(sumofNums - sumofDigits);
};