// Last updated: 3/6/2026, 12:40:55 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var subsetXORSum = function(nums) {
    const subsets = [[]];
    let sum = 0;
    for (const el of nums) {
        const last = subsets.length - 1;
        for (let i = 0; i <= last; i++) {
            subsets.push([...subsets[i], el]);
        }
    }
    for(let i in subsets) {
        let xor = 0;
        for(let j in subsets[i]) {
            xor ^= subsets[i][j];
        }
        sum += xor;
    }
    return sum
};