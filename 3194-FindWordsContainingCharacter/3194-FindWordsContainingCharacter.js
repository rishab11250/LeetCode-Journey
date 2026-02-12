// Last updated: 3/6/2026, 12:39:32 AM
/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function (words, x) {
    let arr = [];
    for (let i in words) {
        for (let j of words[i]) {
            if (j == x) {
                arr.push(parseInt(i));
                break;
            }
        }
    }
    return arr;
};  