SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(DISTINCT student ) >= 5;

-- humlog WHERE nhi use kiye beacuse WHERE GROUP BY ke pahle
-- use hota hai aur HAVING just GROUP BY ke baadh or HAVING me humlog
-- Aggregate fuction bhi use kar sakte hai