// Last updated: 3/6/2026, 12:44:52 AM
/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function (candies, extraCandies) {
    let max = 0;
    for (let i = 0; i < candies.length; i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }
    for (let kid in candies) {
        if (candies[kid] + extraCandies >= max) {
            candies[kid] = true;
        } else {
            candies[kid] = false;
        }
    }
    return candies
};