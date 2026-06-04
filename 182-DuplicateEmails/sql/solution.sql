-- Last updated: 3/6/2026, 12:45:54 AM
# Write your MySQL query statement below
select email as Email from Person group by email having count(email) > 1