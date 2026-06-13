// Last updated: 3/6/2026, 12:45:09 AM
/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;
    }
    let a = 0;
    let b = 1;
    let c = 1;
    let ans = 0;
    for(let i = 3; i <= n; i++){
        ans = a + b + c;
        a = b;
        b = c;
        c = ans;
    }
    return ans;
};