// Last updated: 3/6/2026, 12:39:35 AM
/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function(n, m) {
    let num1 = 0;
    let num2 = 0;
    for(let i = 1; i <= n; i++){
        i%m == 0 ? num2 += i : num1 += i;
    }
    return num1-num2
};