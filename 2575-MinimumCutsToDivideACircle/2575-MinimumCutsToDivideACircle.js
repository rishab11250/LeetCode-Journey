// Last updated: 3/6/2026, 12:40:12 AM
/**
 * @param {number} n
 * @return {number}
 */
var numberOfCuts = function(n) {
    if(n==1){
        return 0
    }
    return n%2==0? n/2:n
};