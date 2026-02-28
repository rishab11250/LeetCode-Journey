// Last updated: 3/6/2026, 12:39:33 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumSum = function(nums) {
    let minimum = Infinity;
    for(let i = 0; i < nums.length; i++){
        for(let j = i+1; j < nums.length; j++){ 
            for(let k = j+1; k < nums.length; k++){
                if(nums[i]<nums[j]&&nums[k]<nums[j]){
                    minimum = Math.min(minimum, nums[i]+nums[k] + nums[j]);
                }
            }
        }
    }
    return minimum == Infinity ? -1 : minimum;
};