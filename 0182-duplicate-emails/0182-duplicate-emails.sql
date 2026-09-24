# Write your MySQL query statement below
Select email from Person Group BY email
Having Count(email) > 1;