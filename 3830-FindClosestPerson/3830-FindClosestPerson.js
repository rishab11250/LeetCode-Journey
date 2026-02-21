// Last updated: 3/6/2026, 12:39:05 AM
/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    if(Math.abs(z-x)>Math.abs(z-y)){
        return 2
    }
    else if(Math.abs(z-x)<Math.abs(z-y)){
        return 1
    }
    else{
        return 0
    }
};