// Last updated: 3/6/2026, 12:39:29 AM
/**
 * @param {string} s
 * @return {number}
 */
var countKeyChanges = function(s) {
    let count = 0;
    let first = s[0].toLowerCase();
    for (let i of s) {
        i = i.toLowerCase();
        if (i != first) {
            count++;
            first = i;
        }
    }
    return count;
};