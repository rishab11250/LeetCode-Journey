// Last updated: 3/6/2026, 12:45:00 AM
/**
 * @param {number[]} arr
 * @return {boolean}
 */
var checkIfExist = function(arr) {
    let i = 0;
    let j = 1;
    while(i < arr.length-1){
        if(arr[i] == 2*arr[j] || arr[i]*2 == arr[j]){
            return true
        }
        j++;
        if(j == arr.length){
            i++
            j = i+1
        }
    }
    return false
};