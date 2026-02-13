// Last updated: 3/6/2026, 12:41:24 AM
/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let max = 0;
    for(let i of accounts){
        let sum = 0;
        for(let j of i){
            sum += j;
        }
        if(sum > max){
            max = sum;
        }
    }
    return max
};