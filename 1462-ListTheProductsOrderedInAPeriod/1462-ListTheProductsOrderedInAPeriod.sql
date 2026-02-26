-- Last updated: 3/6/2026, 12:45:01 AM
# Write your MySQL query statement below
select
    p.product_name,
    SUM(o.unit) as unit
from
    Products p,
    Orders o
where
    p.product_id = o.product_id
    and o.order_date between '2020-02-01' and '2020-02-29'
GROUP BY
    o.product_id
HAVING
    SUM(o.unit) >= 100;