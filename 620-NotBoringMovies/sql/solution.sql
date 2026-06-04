-- Last updated: 3/6/2026, 12:45:34 AM
# Write your MySQL query statement below
select * from Cinema where id%2 = 1 and description != 'boring' ORDER BY rating DESC