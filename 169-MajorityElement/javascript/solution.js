// Last updated: 3/6/2026, 12:45:56 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let obj = {}
    for(let i = 0; i < nums.length; i++){
        if(obj[nums[i]] === undefined){
            obj[nums[i]] = 1
        }
        else{
            obj[nums[i]]++
        }
    }
    let max = 0
    let key;
    for(let i in obj){
        if(obj[i] > max){
            max = obj[i]
            key = i
        }
    }
    return Number(key)
};