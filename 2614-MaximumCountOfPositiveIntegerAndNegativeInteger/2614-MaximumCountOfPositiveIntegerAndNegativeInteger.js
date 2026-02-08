// Last updated: 3/6/2026, 12:40:07 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumCount = function(nums) {
    let neg = 0;
    let pos = 0
    for(let num of nums){
        if(num>0){
            pos++
        }
        if(num<0){
            neg++
        }
    }
    return Math.max(neg,pos)
};