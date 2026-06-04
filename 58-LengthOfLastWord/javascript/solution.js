// Last updated: 3/6/2026, 12:46:15 AM
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
  s=  s.trim().split(' ')
    return s[s.length-1].length
};