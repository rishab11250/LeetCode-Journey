// Last updated: 3/6/2026, 12:45:24 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var dominantIndex = function(nums) {
    let index = 0;
    let max = nums[0]
    for(let i=1;i<nums.length;i++){
        if(nums[i] > max){
            max = nums[i]
            index = i
        }
    }
    for(let i=0;i<nums.length;i++){
        if(nums[i] == max){
            continue
        }
        else{
            if(!(max >= nums[i]*2)){
                return  -1
            }
        }
    }
    return index
};