// Last updated: 3/6/2026, 12:41:02 AM
/**
 * @param {number[][]} points
 * @param {number[][]} queries
 * @return {number[]}
 */
var countPoints = function (points, queries) {
    let result = []
    for (let i = 0; i < queries.length; i++) {
        let count = 0
        for (let j = 0; j < points.length; j++) {
            if (Math.sqrt((points[j][0] - queries[i][0]) ** 2 + (points[j][1] - queries[i][1]) ** 2) <= queries[i][2]) {
                count++
            }
        }
        result.push(count)
    }
    return result
};