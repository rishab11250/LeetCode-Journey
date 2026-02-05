// Last updated: 3/6/2026, 12:45:50 AM
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function (n) {
    if (n < 0) {
        return false
    }
    for (let i = 0; i <= n; i++) {
        if (Math.pow(2, i) == n) {
            return true
            break;
        }
        else if (Math.pow(2, i) > n) {
            return false;
            break;
        }
    }
};