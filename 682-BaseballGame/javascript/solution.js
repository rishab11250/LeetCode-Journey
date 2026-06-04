// Last updated: 3/6/2026, 12:45:30 AM
/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = function (operations) {
    let arr = []
    for (let score of operations) {
        if (score == "C") {
            arr.pop()
        }
        else if (score == "D") {
            arr.push(arr[arr.length - 1] * 2)
        }
        else if (score == "+") {
            arr.push(arr[arr.length - 1] + arr[arr.length - 2])
        }
        else {
            arr.push(parseInt(score))
        }
    }
    let sum = 0;
    for(let num of arr){
        sum += parseInt(num);
    }
    return sum
};