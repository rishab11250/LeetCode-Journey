-- Last updated: 3/6/2026, 12:45:32 AM
# Write your MySQL query statement below
UPDATE Salary
SET
    sex = IF (sex = 'm', 'f', 'm');