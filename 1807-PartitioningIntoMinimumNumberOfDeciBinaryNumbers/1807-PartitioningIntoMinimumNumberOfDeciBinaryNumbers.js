// Last updated: 3/6/2026, 12:41:19 AM
/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    let ans = 0;
    for(let i = 0; i < n.length; i++){
        ans = Math.max(ans, n[i]);
        if(ans == 9){
            break;
        }
    }
    return ans
};