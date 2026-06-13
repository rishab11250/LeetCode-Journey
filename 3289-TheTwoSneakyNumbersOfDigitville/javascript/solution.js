// Last updated: 3/6/2026, 12:39:14 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let obj = {};
    let arr = [];
    for(let i of nums){
        if(obj[i] == undefined){
            obj[i] = 1;
        }
        else{
            arr.push(i);
        }
    }
    return arr;
};