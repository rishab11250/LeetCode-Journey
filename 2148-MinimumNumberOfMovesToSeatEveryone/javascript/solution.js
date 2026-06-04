// Last updated: 3/6/2026, 12:40:48 AM
/**
 * @param {number[]} seats
 * @param {number[]} students
 * @return {number}
 */
var minMovesToSeat = function(seats, students) {
    seats = seats.sort((a,b)=>a-b)
    students = students.sort((a,b)=>a-b)
    let sum = 0
    for(let i=0;i<students.length;i++){
        sum += Math.abs(students[i] - seats[i])
    }
    return sum
};