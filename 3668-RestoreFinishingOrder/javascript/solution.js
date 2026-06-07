// Last updated: 3/6/2026, 12:38:57 AM
/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function(order, friends) {
    let ans = []
    for(let i = 0; i < order.length; i++){
        if(friends.includes(order[i])){
            ans.push(order[i])
        }
    }
    return ans
};