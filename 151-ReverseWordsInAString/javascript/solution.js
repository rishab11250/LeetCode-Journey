// Last updated: 3/6/2026, 12:46:03 AM
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    s = s.trim().split(' ').reverse()
    let ans = ''
    for(let i=0;i<s.length;i++){
        if(s[i]!= ''){
            ans += s[i] + ' '
        }
    }
    return ans.trim()
};