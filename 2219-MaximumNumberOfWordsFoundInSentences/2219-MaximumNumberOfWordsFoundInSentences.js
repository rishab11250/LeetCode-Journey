// Last updated: 3/6/2026, 12:40:41 AM
/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function (sentences) {
    let max = 0;
    for(let sentence of sentences){
        let length = sentence.split(" ").length;
        if(length>max){
            max = length
        }
    }
    return max
};