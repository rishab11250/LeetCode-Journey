// Last updated: 3/6/2026, 12:46:11 AM
/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    return (BigInt(`0b${a}`)+BigInt(`0b${b}`)).toString(2)
};