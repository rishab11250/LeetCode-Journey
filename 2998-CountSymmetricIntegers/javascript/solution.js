// Last updated: 3/6/2026, 12:39:43 AM
/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countSymmetricIntegers = function(low, high) {
    let count = 0;
    for(let i = low;i<=high;i++){
        let str = i.toString();
        if(str.length%2==1 || str.length==1){
            continue;
        }
        let a = 0;
        let b = 0;
        for(let j = 0;j<str.length;j++){
            if(j<str.length/2){
                a += Number(str[j])
            }
            else{
                b += Number(str[j])
            }
        }
        if(a==b){
            count++
        }
    }
    return count
};