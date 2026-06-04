// Last updated: 3/6/2026, 12:40:38 AM
/**
 * @param {number} num
 * @return {boolean}
 */
var isSameAfterReversals = function(num) {
    if(num == 0){
        return true
    }
    if(num%10 == 0){
        return false
    }
    else{
        return true
    }
};