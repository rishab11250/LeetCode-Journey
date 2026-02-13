// Last updated: 3/6/2026, 12:40:59 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function(nums) {
    var neg = 0;
    var pos = 0;
    for(let i of nums){
        if(i == 0){
            return 0;
        }
        if(i < 0){
            neg++;
        }
    }
    if(neg%2==0){
        return 1;
    }
    else{
        return -1;
    }
};