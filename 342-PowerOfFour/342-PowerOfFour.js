// Last updated: 3/6/2026, 12:45:44 AM
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function (n) {
    if (n < 0) {
        return false
    }
    for (let i = 0; i <= n; i++) {
        if (Math.pow(4, i) == n) {
            return true
            break;
        }
        else if (Math.pow(4, i) > n) {
            return false;
            break;
        }
    }
};