// Last updated: 3/6/2026, 12:39:01 AM
/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    let vowel = {}
    let consonant = {}
    for(let i = 0; i < s.length; i++){
        if(s[i]==='a' || s[i]==='e' || s[i]==='i' || s[i]==='o' || s[i]==='u'){
            vowel[s[i]] = vowel[s[i]] ? vowel[s[i]] + 1 : 1
        }
        else{
            consonant[s[i]] = consonant[s[i]] ? consonant[s[i]] + 1 : 1
        }
    }
    let maxV = (Math.max(...Object.values(vowel)))
    let maxC = (Math.max(...Object.values(consonant)))
    if(maxV == -Infinity){
        maxV = 0
    }
    if(maxC == -Infinity){
        maxC = 0
    }
    return maxC+maxV
};