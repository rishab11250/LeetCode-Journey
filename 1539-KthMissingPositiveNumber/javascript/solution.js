// Last updated: 3/6/2026, 12:41:33 AM
/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function(arr, k) {
    let i = 1;
    let count = 0;;
    while(count < k){
        if(!arr.includes(i)){
            count++;
        }
        if(count === k){
            return i
        }
        i++;
    }
};