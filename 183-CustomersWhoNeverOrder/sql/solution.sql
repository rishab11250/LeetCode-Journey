SELECT
    c.name AS Customers
FROM
    Customers c
    left JOIN Orders o ON c.id = o.customerId
WHERE
    customerId is NULL;