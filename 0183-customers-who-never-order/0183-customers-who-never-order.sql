Select c.name AS Customers from Customers c 
LEFT JOIN Orders O
ON
c.id = O.customerId
where o.id  is NULL;

