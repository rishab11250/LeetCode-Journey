// Last updated: 3/6/2026, 12:41:18 AM
/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    let money = 0;
    let dayCount = 1;
    let amount= 1;
    let weekCount = 1;
    for(let i = 1; i <= n; i++){
        money += amount;
        if(dayCount === 7){
            dayCount = 1;
            weekCount++;
            amount = weekCount
        }
        else{
            dayCount++;
            amount++
        }
    }
    return money;
};