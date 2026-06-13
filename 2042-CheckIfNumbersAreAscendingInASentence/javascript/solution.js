// Last updated: 3/6/2026, 12:40:42 AM
/**
 * @param {string} s
 * @return {boolean}
 */
var areNumbersAscending = function(s) {
    s = s.split(" ")
    let a = 0;
    for(let i in s){
        if(s[i]>-Infinity && s[i]<Infinity){
            if(s[i]>a){
                a = parseInt(s[i])
            }
            else{
                return false
            }
        }
    }
    return true 
};