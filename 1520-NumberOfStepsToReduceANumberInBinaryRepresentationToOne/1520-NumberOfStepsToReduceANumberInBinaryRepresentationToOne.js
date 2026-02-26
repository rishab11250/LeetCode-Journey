// Last updated: 3/6/2026, 12:44:54 AM
/**
 * @param {string} s
 * @return {number}
 */
var numSteps = function(s) {
    s = BigInt("0b" + s)
    let count = 0
    while(s >= 1n){
        if(s == 1n){
            return count
        }
        s%2n==0n ? s = s/2n : s = s+1n;
        count++
    }
    return s
};