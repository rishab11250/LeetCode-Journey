// Last updated: 3/6/2026, 12:40:09 AM
/**
 * @param {number} num
 * @return {number}
 */
var countDigits = function (num) {
    let count = 0;
    let temp = num;
    for (let i = 0; i < num.toString().length; i++) {
        let digit = temp % 10;
        temp = Math.floor(temp / 10);
        if (num % digit === 0) {
            count++;
        }
    }
    return count
};