// Last updated: 3/6/2026, 12:45:28 AM
/**
 * @param {number} n
 * @return {boolean}
 */
var hasAlternatingBits = function(n) {
    let binaryString = n.toString(2);
    for(let i = 0; i < binaryString.length-1; i++){
        if(binaryString[i] == binaryString[i+1]){
            return false
        }
    }
    return true
};