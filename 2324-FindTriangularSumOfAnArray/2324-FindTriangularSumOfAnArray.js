// Last updated: 3/6/2026, 12:40:30 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var triangularSum = function(nums) {
    var arr = nums;
    for(let i = 0; i < nums.length-1; i++){
        function sum(array, i, j){
            let copy = []
            while(j< array.length){
                copy.push((array[j-1] + array[j])%10);
                j++;
            }
            arr = copy;
        }
        sum(arr, 0, 1);
    }
    return arr[0]
};