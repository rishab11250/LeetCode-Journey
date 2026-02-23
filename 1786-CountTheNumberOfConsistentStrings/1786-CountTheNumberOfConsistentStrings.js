// Last updated: 3/6/2026, 12:41:25 AM
/**
 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function(allowed, words) {
    let count = 0;
    for(let i = 0;i<words.length;i++){
        let flag = true;;
        for(let j = 0;j<words[i].length;j++){
            if(allowed.indexOf(words[i][j])==-1){
                flag = false;
                break;
            }
        }
        count += flag;
    }
    return count;
};