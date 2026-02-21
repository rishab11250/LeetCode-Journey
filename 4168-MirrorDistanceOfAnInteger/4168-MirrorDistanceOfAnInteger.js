// Last updated: 3/6/2026, 12:38:49 AM
/**
 * @param {number} n
 * @return {number}
 */
var mirrorDistance = function(n) {
    return Math.abs(n - n.toString().split('').reverse().join(''))
};