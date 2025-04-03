# Write your MySQL query statement below
select m.name from Employee e

join employee as m
on m.id=e.managerId
group by e.managerId
having count(m.id)>4
