-- my solution
-- SELECT distinct rj.class
-- FROM Courses AS c
-- RIGHT JOIN (
--     SELECT class
--     FROM Courses
--     GROUP BY class
--     HAVING COUNT(student) >= 5
-- ) AS rj
-- ON rj.class = c.class;


SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;
