// Last updated: 3/6/2026, 12:39:56 AM
/**
 * @param {number} arrivalTime
 * @param {number} delayedTime
 * @return {number}
 */
var findDelayedArrivalTime = function(arrivalTime, delayedTime) {
    return arrivalTime + delayedTime < 24 ? arrivalTime + delayedTime : arrivalTime + delayedTime - 24
};