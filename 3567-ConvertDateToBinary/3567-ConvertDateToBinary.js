// Last updated: 3/6/2026, 12:39:15 AM
/**
 * @param {string} date
 * @return {string}
 */
var convertDateToBinary = function (date) {
    return `${(date[0] * 1000 + date[1] * 100 + date[2] * 10 + date[3] * 1).toString(2)}-${(date[5] * 10 + date[6] * 1).toString(2)}-${(date[8] * 10 + date[9] * 1).toString(2)}`;
};