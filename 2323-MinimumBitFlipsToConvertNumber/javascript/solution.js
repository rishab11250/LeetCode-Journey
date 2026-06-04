// Last updated: 3/6/2026, 12:40:31 AM
/**
 * @param {number} start
 * @param {number} goal
 * @return {number}
 */
var minBitFlips = function(start, goal) {
    start = start.toString(2)
    goal = goal.toString(2)
    if(start.length > goal.length){
        let length = start.length-goal.length;
        for(let i=0;i<length;i++){
            goal = "0"+goal
        }
    }
    else{
        let length = goal.length-start.length;
        for(let i=0;i<length;i++){
            start = "0"+start
        }
    }
    let count = 0;
    for(let i=0;i<start.length;i++){
        if(start[i] != goal[i]){
            count++
        }
    }
    return count
};