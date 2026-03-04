// Last updated: 3/6/2026, 12:39:04 AM
/**
 * @param {number[]} cost
 * @return {number[]}
 */
var minCosts = function(cost) {
    let min = cost[0];
    for(let i = 1; i < cost.length; i++){
        min = Math.min(min, cost[i])
        cost[i] = min
    }
    return cost
};