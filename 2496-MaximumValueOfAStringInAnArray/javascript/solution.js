// Last updated: 3/6/2026, 12:40:10 AM
/**
 * @param {string[]} strs
 * @return {number}
 */
var maximumValue = function(strs) {
    let max = 0;
    for(let i = 0; i < strs.length; i++){
        if(isNaN(strs[i])){
            max = Math.max(max, strs[i].length);
        }
        else{
            max = Math.max(max, parseInt(strs[i]));
        }
    }
    return max
};