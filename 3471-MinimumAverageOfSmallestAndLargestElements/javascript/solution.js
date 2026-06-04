// Last updated: 3/6/2026, 12:39:21 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function (nums) {
    let newarr = [];
    nums = nums.sort((a, b) => a - b);
    let n = nums.length;
    let maxNum = nums.length - 1;
    let minNum = 0;
    if (nums.length % 2 == 1) {
        return newarr;
    }
    while (n != 0) {
        let max = nums[maxNum];
        let min = nums[minNum];
        maxNum = maxNum - 1;
        minNum = minNum + 1;
        newarr.push((max + min) / 2);
        n = n - 2;
    }
    return Math.min(...newarr);
    return Math.min(...newarr);
};