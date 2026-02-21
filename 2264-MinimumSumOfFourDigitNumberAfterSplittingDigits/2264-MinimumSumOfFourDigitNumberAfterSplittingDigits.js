// Last updated: 3/6/2026, 12:40:36 AM
/**
 * @param {number} num
 * @return {number}
 */
var minimumSum = function(num) {
    num = num.toString();
    let min = Infinity;
    let min2 = Infinity;
    let max = -Infinity;
    let max2 = -Infinity;
    for (let i = 0; i < num.length; i++) {
        if (min >= num[i]) {
            min2 = min
            min = num[i]
        }
        else if(num[i] <= min2 && num[i] != min){
            min2 = num[i]
        }
        if (max <= num[i]) {
            max2 = max
            max = num[i]
        }
        else if(num[i] >= max2 && num[i] != max){
            max2 = num[i]
        }
    }
    let num1 = Number(min*10) + Number(max);
    let num2 = Number(min2*10) + Number(max2);
    return num1+num2
};