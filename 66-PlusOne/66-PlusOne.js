// Last updated: 3/6/2026, 12:46:12 AM
/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
        if(digits[digits.length - 1] != 9) {
        digits[digits.length - 1]++
    }
    else if(digits[digits.length - 1] == 9) {
        for(let i = digits.length - 1; i >= 0; i--) {
            if(digits[i] == 9) {
                digits[i] = 0
            }
            else {
                digits[i]++
                break
            }
        }
        if(digits[0]==0){
            digits.unshift(1)
        }
    }
    return digits
};