// Last updated: 3/6/2026, 12:41:32 AM
/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
    let ans = []
    s = s.split("")
    for(let i=0;i<indices.length;i++){
        ans[indices[i]] = s[i]
    }
    return ans.join('')
};