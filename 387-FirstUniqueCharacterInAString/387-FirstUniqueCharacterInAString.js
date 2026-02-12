// Last updated: 3/6/2026, 12:45:41 AM
/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function (s) {
    let flag = false;
    for (let i = 0; i < s.length; i++) {
        let present = false;
        for (let j = 0; j < s.length; j++) {
            if (i == j) {
                continue;
            }
            else if (s[i] == s[j]) {
                present = true;
                break;
            }
        }
        if (!present) {
            return i
            flag = true;
            break;
        }
    }
    if (!flag) {
        return -1;
    }
};