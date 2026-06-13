// Last updated: 3/6/2026, 12:45:18 AM
/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
    for(let i = 0; i < image.length; i++){
        let j = 0;
        let k = image[i].length - 1;
        while(j<k){
            [image[i][j], image[i][k]] = [image[i][k], image[i][j]];
            j++;
            k--;
        }
        for(let j = 0; j < image[i].length; j++){
            if(image[i][j]==0){
                image[i][j] = 1;
            }
            else{
                image[i][j] = 0;
            }
        }
    }
    return image
};