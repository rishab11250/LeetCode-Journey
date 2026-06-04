// Last updated: 3/6/2026, 12:38:48 AM
/**
 * @param {number} n
 * @return {number}
 */
var minimumFlips = function(n) {
    let count = 0
    n = n.toString(2)
    let i = 0;
    let j = n.length-1;
    while(i<n.length && j>=0){
        if(n[i]!=n[j]){
            count++
        }
        i++
        j--
    }
    return count
};