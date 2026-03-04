// Last updated: 3/6/2026, 12:40:15 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var distinctAverages = function(nums) {
    nums = nums.sort((a,b)=>a-b);
    let i = 0;
    let j = nums.length - 1;
    let obj = {};
    while(i < j){
        let avg = (nums[i] + nums[j])/2;
        if(obj[avg]){
            obj[avg]++;
        }
        else{
            obj[avg] = 1;
        }
        i++;
        j--;
    }
    return Object.values(obj).length
};