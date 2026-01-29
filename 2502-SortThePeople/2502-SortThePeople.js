// Last updated: 3/6/2026, 12:40:20 AM
/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
var sortPeople = function (names, heights) {
    for (let i in names) {
        let j = i;
        while (j > 0 && heights[j] > heights[j - 1]) {
            [heights[j], heights[j - 1]] = [heights[j - 1], heights[j]];
            [names[j], names[j - 1]] = [names[j - 1], names[j]];
            j--;
        }
    }
    return names;
};