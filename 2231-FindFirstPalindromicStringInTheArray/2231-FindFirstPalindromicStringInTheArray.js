// Last updated: 3/6/2026, 12:40:39 AM
/**
 * @param {string[]} words
 * @return {string}
 */
var firstPalindrome = function(words) {
    for(let string of words){
        if(string.split('').reverse().join('') === string){
            return string
        }
    }
    return ""
};