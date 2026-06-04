// Last updated: 3/6/2026, 12:45:42 AM
/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function (s) {
    let index = [];
    let vowers = []
    s = s.split('')
    for (let i in s) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowers.push(s[i])
            index.push(i)
        }
    }
    vowers.reverse()
    for (let i in index) {
        s[Number(index[i])] = vowers[Number(i)]
    }
    return s.join('')
};