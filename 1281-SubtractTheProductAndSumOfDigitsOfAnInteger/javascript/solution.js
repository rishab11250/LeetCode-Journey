// Last updated: 3/6/2026, 12:45:06 AM
/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    var sum = 0;
    var multi = 1;
    while(n > 0){
        let digit = n % 10;
        sum += digit;
        multi *= digit;
        n = Math.floor(n / 10);
    }
    return multi - sum;
};