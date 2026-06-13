// Last updated: 3/6/2026, 12:41:22 AM
/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    let str = ''
    for(let i = 0;i<command.length;i++){
        if(command[i]=='G'){
            str += 'G'
        }
        else if(command[i] + command[i+1] == '()'){
            str += 'o'
            i++
        }
        else if(command[i] + command[i+1] + command[i+2] + command[i+3] == '(al)'){
            str += 'al'
            i+=3
        }
    }
    return str
};