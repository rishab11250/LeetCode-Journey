// Last updated: 3/6/2026, 12:38:54 AM
/**
 * @param {string} s
 * @return {number}
 */
var maxDistinct = function(s) {
    let obj = {};
    for(let i = 0; i < s.length; i++){
        obj[s[i]] = 1;
    }
    return (Object.keys(obj).length);
};