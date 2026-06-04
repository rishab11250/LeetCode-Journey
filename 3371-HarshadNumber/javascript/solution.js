// Last updated: 3/6/2026, 12:39:26 AM
/**
 * @param {number} x
 * @return {number}
 */
var sumOfTheDigitsOfHarshadNumber = function(x) {
    let temp = x;
    let sum = 0;
    while(temp > 0){
        sum += temp % 10;
        temp = Math.floor(temp / 10);
    }
    if(x%sum == 0){
        return sum;
    }
    else{
        return -1
    }
};