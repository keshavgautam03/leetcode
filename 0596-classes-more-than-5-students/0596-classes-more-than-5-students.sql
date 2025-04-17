-- # Write your MySQL query statement below
-- select class from Courses as c
-- right join (select class,
-- from Courses 
-- GROUP BY class
-- having count(student)>=5

-- ) rj
-- on rj.class=c.class


SELECT distinct rj.class
FROM Courses AS c
RIGHT JOIN (
    SELECT class
    FROM Courses
    GROUP BY class
    HAVING COUNT(student) >= 5
) AS rj
ON rj.class = c.class;


-- SELECT class
-- FROM Courses
-- GROUP BY class
-- HAVING COUNT(student) >= 5;
