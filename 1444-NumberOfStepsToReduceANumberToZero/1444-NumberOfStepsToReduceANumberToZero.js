// Last updated: 3/6/2026, 12:45:03 AM
/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
    let count = 0
    while(num!=0){
        count++;
        num%2===0 ? num = num/2 : num--
    }
    return count
};