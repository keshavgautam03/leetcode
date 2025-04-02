# Write your MySQL query statement below
-- select VIS.customer_id,
-- COUNT(VIS.visit_id) as count_to_trans
-- from Visits VIS
-- LEFT JOIN Transactions t
-- where t.transaction_id is NULL
-- group by VIS.customer_id;

select Visits.customer_id as customer_id, count(*) as count_no_trans
from Visits 
left join Transactions 
on Visits.visit_id=Transactions.visit_id
where Transactions.transaction_id is null 
group by Visits.customer_id
