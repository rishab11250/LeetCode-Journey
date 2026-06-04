// Last updated: 3/6/2026, 12:46:31 AM
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    let reversed = 0;
    let tempX = x;

    const MAX_INT = 2147483647; 
    const MIN_INT = -2147483648; 

    while (tempX !== 0) {
        let digit = tempX % 10;
        tempX = Math.trunc(tempX / 10); 
        if (reversed > Math.floor(MAX_INT / 10) || 
            (reversed === Math.floor(MAX_INT / 10) && digit > 7)) {
            return 0;
        }
        if (reversed < Math.ceil(MIN_INT / 10) || 
            (reversed === Math.ceil(MIN_INT / 10) && digit < -8)) {
            return 0;
        }

        // 4. Perform the reversal step (guaranteed safe at this point)
        reversed = reversed * 10 + digit;
    }

    return reversed;
};