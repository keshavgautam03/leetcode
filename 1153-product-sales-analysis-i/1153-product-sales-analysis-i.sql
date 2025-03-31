# Write your MySQL query statement below
select 
pro.product_name,
SALES.year,
SALES.price
from product as pro
join Sales as SALES
on pro.product_id=SALES.product_id;

