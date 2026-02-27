// Last updated: 3/6/2026, 12:41:01 AM
/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    s = s.split(" ")
    return s.slice(0, k).join(" ")
};