// Last updated: 3/6/2026, 12:45:45 AM
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function (n) {
    if (n < 0) {
        return false
    }
    for (let i = 0; i <= n; i++) {
        if (Math.pow(3, i) == n) {
            return true
        }
        else if (Math.pow(3, i) > n) {
            return false;
        }
    }
};