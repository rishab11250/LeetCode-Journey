// Last updated: 3/6/2026, 12:40:05 AM
/**
 * @param {number} n
 * @return {number}
 */
var alternateDigitSum = function(n) {
    n = n.toString()
    let ans = 0
    for(let i = 0; i < n.length; i++){
        if(i % 2 === 0){
            ans += parseInt(n[i])
        }
        else{
            ans -= parseInt(n[i])
        }
    }
    return ans
};