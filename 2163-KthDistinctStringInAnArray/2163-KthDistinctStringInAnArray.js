// Last updated: 3/6/2026, 12:40:45 AM
/**
 * @param {string[]} arr
 * @param {number} k
 * @return {string}
 */
var kthDistinct = function(arr, k) {
    let obj = {};
    for(let i = 0; i < arr.length; i++){
        if(obj[arr[i]] === undefined){
            obj[arr[i]] = 1;
        }
        else{
            obj[arr[i]]++;
        }
    }
    let count = 0;
    for(let i in obj){
        if(obj[i] == 1){
            count++;
            if(count == k){
                return i
            }
        }
    }
    return ""
};