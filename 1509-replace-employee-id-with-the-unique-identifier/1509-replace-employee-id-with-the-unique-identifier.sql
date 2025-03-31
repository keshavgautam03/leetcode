# Write your MySQL query statement below
select uni.unique_id, e.name 
from Employees e
LEFT JOIN EmployeeUNI uni
on uni.id=e.id;
