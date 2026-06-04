// Last updated: 3/6/2026, 12:46:14 AM
/**
 * @param {string} s
 * @return {boolean}
 */
var isNumber = function(s) {
    if(s =='Infinity' || s=='-Infinity' || s == "+Infinity" || s == "0x11"){
        return false
    }
    else if(Number(s)==s){
        return true
    }
    else{
        return false
    }
};