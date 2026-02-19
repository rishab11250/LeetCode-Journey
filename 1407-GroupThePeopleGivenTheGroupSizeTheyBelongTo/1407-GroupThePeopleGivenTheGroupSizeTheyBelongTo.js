// Last updated: 3/6/2026, 12:45:04 AM
/**
 * @param {number[]} groupSizes
 * @return {number[][]}
 */
var groupThePeople = function(groupSizes) {
    let groups = []
    let obj = {};
    for(let i = 0; i < groupSizes.length; i++){
        let temp = []
        for(let j = 0; j < groupSizes.length; j++){
            if(groupSizes[i] === groupSizes[j]){
                temp.push(j)
            }
        }
        obj[groupSizes[i]] = temp
    }
    for(let i in obj){
        let count = 0
        for(let j = 1; j <= obj[i].length/i; j++){
            let temp = []
            for(let k = 0; k < i; k++){
                temp.push(obj[i][count])
                count++
            }
            groups.push(temp)
        }
    }
    return groups
};