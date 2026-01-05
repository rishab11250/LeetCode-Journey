// Last updated: 3/6/2026, 12:46:24 AM
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
    let i = 0;
    for (let int of nums) {
        if (int != val) {
            nums[i] = int;
            i++;
        }
    }
    return i
};