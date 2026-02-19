// Last updated: 3/6/2026, 12:41:08 AM
/**
 * @param {string} boxes
 * @return {number[]}
 */
var minOperations = function(boxes) {
    let arr= [];
    let count = 0
    while(count < boxes.length){
        let sum = 0
        for(let j=0;j<boxes.length;j++){
            if(boxes[j] == 1){
                sum = sum + Math.abs(count-j)
            }
        }
        count = count + 1
        arr.push(sum)
    }
    return arr
};