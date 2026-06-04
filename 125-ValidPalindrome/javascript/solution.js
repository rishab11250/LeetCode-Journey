// Last updated: 3/6/2026, 12:46:06 AM
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.toLowerCase().trim();
    console.log(s)
    let smooth = ''
    for (let i of s){
        if(i>='a' && i<='z'||i>='0' && i<='9'){
            smooth+=i
        }
    }
    return smooth.split('').reverse().join('') === smooth
};