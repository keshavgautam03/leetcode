select product_id, year as first_year, quantity, price 
from sales where (product_id, year) in (
    select product_id, min(year)
    from sales
    group by product_id
)
-- select distinct s.product_id as product_id,
-- s.year as first_year,
-- s.quantity as quantity,
-- s.price as price
-- from Sales as s
-- join (select product_id,min(year) as first_year 
-- from Sales
-- group by product_id) p
-- on p.product_id=s.product_id
-- where s.year=p.first_year;
