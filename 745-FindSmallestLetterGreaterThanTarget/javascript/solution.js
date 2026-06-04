// Last updated: 3/6/2026, 12:45:25 AM
/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function (letters, target) {
    let min;
    for (let letter of letters) {
        if (letter > target) {
            min = letter;
            break;
        }
    }
    if (min === undefined) {
        min = letters[0];
    }
    return min
};