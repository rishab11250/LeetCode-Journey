// Last updated: 3/6/2026, 12:40:01 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var findTheArrayConcVal = function(nums) {
    let i = 0;
    let j = nums.length - 1;
    let ans = 0;
    while(i <= j){
        if(i == j){
            var sum = nums[i]
        }
        else{
            var sum = String(nums[i]) + String(nums[j])
        }
        ans += parseInt(sum)
        i++;
        j--;
    }
    return ans
};