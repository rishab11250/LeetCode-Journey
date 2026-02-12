// Last updated: 3/6/2026, 12:45:07 AM
/**
 * @param {number[]} arr
 * @return {boolean}
 */
var threeConsecutiveOdds = function (arr) {
    for (let i = 0; i < arr.length - 2; i++) {
        if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
            return true;
        }
        else {
            continue
        }
    }
    return false;
};