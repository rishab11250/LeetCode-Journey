// Last updated: 3/6/2026, 12:44:57 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    let smaller = []
    for(let i of nums){
        let count = 0
        for(let j of nums){
            if(i>j){
                count++
            }
        }
        smaller.push(count)
    }
    return smaller
};