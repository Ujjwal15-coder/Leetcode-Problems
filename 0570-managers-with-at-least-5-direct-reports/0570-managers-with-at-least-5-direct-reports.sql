   SELECT e.name
   FROM Employee as e 
   JOIN
        ( SELECT managerId 
         FROM Employee 
         WHERE managerID IS NOT NULL
         GROUP BY managerId
         HAVING COUNT(*) >= 5 )
    AS m
    ON e.id = m.managerId;
    
