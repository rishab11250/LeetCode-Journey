// Last updated: 3/6/2026, 12:45:48 AM
/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function (num) {
    let sum = 0
    while (num.toString().length > 1) {
        sum = 0
        for (let i = 0; i < num.toString().length; i++) {
            sum += parseInt(num.toString()[i])
        }
        num = sum
    }
    return num
};