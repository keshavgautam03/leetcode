# Write your MySQL query statement below
select st.student_id,st.student_name,su.subject_name,
coalesce(e.attended_exams,0) as attended_exams
from Students st
cross join Subjects su
left join (SELECT student_id, subject_name,COUNT(*) AS attended_exams
    FROM Examinations
    GROUP BY student_id, subject_name
     )e

ON st.student_id = e.student_id AND su.subject_name = e.subject_name
ORDER BY st.student_id, su.subject_name;
