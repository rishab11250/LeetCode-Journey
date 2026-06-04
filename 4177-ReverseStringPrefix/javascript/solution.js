// Last updated: 3/6/2026, 12:38:52 AM
/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reversePrefix = function(s, k) {
    s = s.split('')
    let arr = []
    for(let i = 0; i < k ; i++){
        arr.push(s[i])
    }
    for(let i = 0; i < k; i++){
        s.shift(s[i])
    }
    arr.reverse()
    return [...arr,...s].join('')
};