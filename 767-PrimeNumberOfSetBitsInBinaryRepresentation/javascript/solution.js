// Last updated: 3/6/2026, 12:45:22 AM
/**
 * @param {number} left
 * @param {number} right
 * @return {number}
 */
var countPrimeSetBits = function (left, right) {
    let count = 0
    for (let i = left; i <= right; i++) {
        let binary = i.toString(2);
        let one = 0
        for (let j = 0; j < binary.length; j++) {
            if (binary[j] === "1") {
                one++
            }
        }
        if (one == 2 || one == 3 || one == 5 || one == 7 || one == 11 || one == 13 || one == 17 || one == 19) {
            count++
        }
    }
    return count
};