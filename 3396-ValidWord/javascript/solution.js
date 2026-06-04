// Last updated: 3/6/2026, 12:39:24 AM
/**
 * @param {string} word
 * @return {boolean}
 */
var isValid = function(word) {
    if(word.length < 3){
        return false;
    }
    word = word.toLowerCase();
    for(let i = 0; i < word.length; i++){
        if(!((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= '0' && word[i] <= '9'))){
            return false;
        }
    }
    let vowels = ['a','e','i','o','u'];
    let consonants = ['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'];
    let fv = false;
    let cv = false;
    for(let i = 0; i < word.length; i++){
        if(fv && cv){
            return true;
        }
        if(!((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= '0' && word[i] <= '9'))){
            return false;
        }
        for(let j = 0; j < vowels.length; j++){
            if(word[i] == vowels[j]){
                fv = true;
                break;
            }
        }
        for(let j = 0; j < consonants.length; j++){
            if(word[i] == consonants[j]){
                cv = true;
                break;
            }
        }
    }
    if(fv && cv){
        return true;
    }
    return false;
};