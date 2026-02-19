// Last updated: 3/6/2026, 12:40:49 AM
/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let x = 0;
    for(let i of operations){
        if(i == "--X" || i == "X--"){
            x--;
        }
        else if(i == "X++"|| i == "++X"){
            x++;
        }
    }
    return x
};