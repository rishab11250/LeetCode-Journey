// Last updated: 3/6/2026, 12:40:13 AM
/**
 * @param {number} n
 * @return {number}
 */
var pivotInteger = function(n) {
    for(let i = 1; i <= n; i++) {
        if(i == Math.sqrt(n * (n + 1) / 2)) {
            return i;
        }
    }
    return -1;
};