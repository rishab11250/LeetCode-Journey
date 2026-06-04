// Last updated: 3/6/2026, 12:44:50 AM
/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function (sentence, searchWord) {
    let flag;
    sentence = sentence.trim().split(' ')
    for (let i in sentence) {
        if(flag == true){
            break;
        }
        if (sentence[i][0] == searchWord[0]) {
            for (let j in sentence[i]) {
                if (sentence[i][j] == searchWord[j]) {
                    if(searchWord.length-1 == j){
                        flag = true
                        return (Number(i)+1)
                    }
                    continue;
                }
                break;
            }
        }
    }
    return -1
};