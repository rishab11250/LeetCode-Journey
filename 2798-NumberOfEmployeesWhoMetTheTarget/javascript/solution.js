// Last updated: 3/6/2026, 12:39:41 AM
/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function(hours, target) {
    let count = 0;
    for(let i of hours){
        if(i >= target){
            count++;
        }
    }
    return count
};