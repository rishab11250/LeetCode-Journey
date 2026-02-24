// Last updated: 3/6/2026, 12:41:14 AM
/**
 * @param {number[]} encoded
 * @param {number} first
 * @return {number[]}
 */
var decode  = function(encoded, first) {
    let arr = [first]
    for(let i = 0; i < encoded.length; i++){
        arr.push(arr[arr.length - 1] ^ encoded[i])
    }
    return arr
};