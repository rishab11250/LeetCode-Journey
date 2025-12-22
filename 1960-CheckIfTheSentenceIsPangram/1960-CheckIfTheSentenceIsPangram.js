// Last updated: 3/6/2026, 12:40:58 AM
/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function (sentence) {
    sentence = sentence.toLowerCase();
    let char = 'a';
    let count = 0;
    while (char <= 'z') {
        for (let char2 of sentence) {
            if (char2 == char) {
                count++;
                break;
            }
        }
        let charCode = char.charCodeAt();
        charCode++;
        char = String.fromCharCode(charCode);
    }
    return count==26;
};