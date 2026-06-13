// Last updated: 3/6/2026, 12:40:03 AM
/**
 * @param {number[][]} score
 * @param {number} k
 * @return {number[][]}
 */
var sortTheStudents = function(score, k) {
    // for(let i=0;i<score.length;i++){
    //     for(let j=0;j<score.length-1-i;j++){
    //         if(score[j][k]<score[j+1][k]){
    //             [score[j],score[j+1]]=[score[j+1],score[j]];
    //         }
    //     }
    // }
    return score.sort((a,b)=>b[k]-a[k])
};