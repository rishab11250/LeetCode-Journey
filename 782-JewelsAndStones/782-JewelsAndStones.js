// Last updated: 3/6/2026, 12:45:21 AM
/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let obj = {};
    for (let i = 0; i < stones.length; i++) {
        if(stones[i] in obj) {
            obj[stones[i]] += 1;
        } else {
            obj[stones[i]] = 1;
        }
    }
    let count = 0;
    for(let i of jewels){
        if(i in obj){
            count += obj[i];
        }
    }
    return count
};