// Last updated: 3/6/2026, 12:39:18 AM
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canAliceWin = function(nums) {
    let single = 0;
    let double = 0;
    for(let num of nums){
        if(num>=10){
            double += num;
        }
        else{
            single += num;
        }
    }
    if(single>double||single<double){
        return true;
    }
    else{
        return false;
    }
};