# Write your MySQL query statement below
SELECT 
    d.name AS Department, 
    e.name AS Employee, 
    e.salary AS Salary 
FROM employee e
JOIN department d 
    ON d.id = e.departmentId 
WHERE e.salary = (
    SELECT MAX(salary) 
    FROM employee 
    WHERE departmentId = d.id
);