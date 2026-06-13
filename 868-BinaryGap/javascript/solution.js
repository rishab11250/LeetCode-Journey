// Last updated: 3/6/2026, 12:45:16 AM
/**
 * @param {number} n
 * @return {number}
 */
var binaryGap = function(n) {
    n = n.toString(2)
    let max = 0;
    let first = 0;
    let second = 0;
    for(let i = 0; i < n.length; i++){
        if(n[i] === '1'){
            first = second;
            second = i;
        }
        max = Math.max(max, second - first);
    }
    return max
};