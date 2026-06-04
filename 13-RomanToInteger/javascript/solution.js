// Last updated: 3/6/2026, 12:46:26 AM
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let ans = 0
    for (let i = 0; i < s.length; i++) {
        if (s[i] == "M") {
            ans += 1000
        }
        else if (s.slice(i,i+2) == 'CM') {
            ans += 900
            i++
        }
        else if (s.slice(i,i+2) == 'CD') {
            ans += 400
            i++
        }
        else if (s[i] == "D") {
            ans += 500
        }
        else if (s[i] == "C") {
            ans += 100
        }
        else if (s.slice(i,i+2) == "XC") {
            ans += 90
            i++
        }
        else if (s.slice(i,i+2) == "XL") {
            ans += 40
            i++
        }
        else if (s[i] == "L") {
            ans += 50
        }
        else if (s.slice(i,i+2) == "IX") {
            ans += 9
            i++
        }
        else if (s[i] == "X") {
            ans += 10
        }
        else if (s.slice(i,i+2) == "IV") {
            ans += 4
            i++
        }
        else if (s[i] == "V") {
            ans += 5
        }
        else if (s[i] == "I") {
            ans += 1
        }
    }
    return ans
};