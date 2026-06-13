// Last updated: 3/6/2026, 12:41:12 AM
/**
 * @param {string} s
 * @return {number}
 */
var minOperations = function(s) {
    s = s.split('')
    let c1 = 0;
    let c2 = 0;
    for(let i = 0; i < s.length; i++){
        if(i%2 == 0){
            if(s[i] == '0'){
                c1++;
            }
            else{
                c2++;
            }
        }
        else{
            if(s[i] == '1'){
                c1++;
            }
            else{
                c2++;
            } 
        }
    }
    return Math.min(c1, c2);
};