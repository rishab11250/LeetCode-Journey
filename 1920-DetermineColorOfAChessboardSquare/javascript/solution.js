// Last updated: 3/6/2026, 12:41:04 AM
/**
 * @param {string} coordinates
 * @return {boolean}
 */
var squareIsWhite = function (coordinates) {
    if ((coordinates[1] % 2 == 0 && (coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g')) || coordinates[1] % 2 == 1 && (coordinates[0] == 'b' || coordinates[0] == 'd' || coordinates[0] == 'f' || coordinates[0] == 'h')) {
        return true
    }
    else {
        return false
    }
};