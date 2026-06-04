// Last updated: 3/6/2026, 12:44:53 AM
/**
 * @param {number[]} queries
 * @param {number} m
 * @return {number[]}
 */
var processQueries = function(queries, m) {
    let p = [];
    for(let i = 1; i <= m; i++){
        p.push(i);
    }
    let result = [];
    for(let i = 0; i < queries.length; i++){
        let index = 0;
        for(let j = 0; j < p.length; j++){
            if(p[j] == queries[i]){
                index = j;
                break;
            }
        }
        result.push(index)
        p.splice(index, 1);
        p.unshift(queries[i]);
    }
    return result
};