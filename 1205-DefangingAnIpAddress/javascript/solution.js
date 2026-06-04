// Last updated: 3/6/2026, 12:45:10 AM
/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function(address) {
    address = address.split("");
    for(let i = 0; i < address.length; i++){
        if(address[i]=="."){
            address[i] = '[.]'
            i++;
        }
    }
    return address.join('')
};