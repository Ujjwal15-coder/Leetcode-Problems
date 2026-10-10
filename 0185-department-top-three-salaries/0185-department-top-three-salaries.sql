SELECT d.name as Department,
        e.name as Employee,
        e.salary as Salary
FROM Employee as e
INNER JOIN
Department as d
ON e.departmentId = d.id
WHERE 3 > (
    SELECT COUNT(DISTINCT(e2.Salary))
    FROM Employee e2
    WHERE e2.salary > e.salary AND
    e.DepartmentId = e2.DepartmentId
)
