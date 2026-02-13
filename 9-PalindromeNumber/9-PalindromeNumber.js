// Last updated: 3/6/2026, 12:46:29 AM
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let temp = x
    if(x<0){
        return false;
    }
    var reverse = 0;
    while(temp>0){
        var digit = temp%10;
        reverse = reverse*10 + digit;
        temp = Math.floor(temp/10)
    }
    if(x==reverse){
        return true;
    }
    else{
        return false
    }
};