// Last updated: 3/6/2026, 12:40:26 AM
/**
 * @param {string} s
 * @return {character}
 */
var repeatedCharacter = function(s) {
    let obj = {}
    for(let i = 0; i < s.length; i++){
        if(obj[s[i]]){
            return s[i]
        }else{
            obj[s[i]] = 1
        }
    }
};