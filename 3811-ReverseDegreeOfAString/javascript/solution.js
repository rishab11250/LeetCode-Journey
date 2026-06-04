// Last updated: 3/6/2026, 12:39:08 AM
/**
 * @param {string} s
 * @return {number}
 */
var reverseDegree = function(s) {
    let sum = 0;
    for(let i = 0; i < s.length; i++){
        sum += ((123 - s[i].charCodeAt(0))*(i+1));
    }
    return sum
};