// Last updated: 3/6/2026, 12:38:51 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findMissingElements = function(nums) {
    var max = nums[0];
    var min = nums[0];
    let result = [];
    for(let i of nums){
        if(i>max){
            max = i;
        }
        if(i<min){
            min = i;
        }
    }
    for(let i = min; i<=max; i++){
        if(nums.includes(i)==false){
            result.push(i);
        }
    }
    return result;
};