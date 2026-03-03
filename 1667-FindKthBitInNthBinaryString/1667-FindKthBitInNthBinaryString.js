// Last updated: 3/6/2026, 12:41:29 AM
/**
 * @param {number} n
 * @param {number} k
 * @return {character}
 */
var findKthBit = function(n, k) {
    function invert(s){
        s = s.split('') 
        for(let i=0;i<s.length;i++){
            if(s[i]==='1'){
                s[i] = '0'
            }else{
                s[i] = '1'
            }
        }
        return s.reverse().join('')
    }
    // function reverse(s){
    //     return s.split('').reverse().join('')
    // }
    let sn = '0'
    for(let i=0;i<n;i++){
        sn = sn + '1' + invert(sn)
    }
    return sn[k-1]
};