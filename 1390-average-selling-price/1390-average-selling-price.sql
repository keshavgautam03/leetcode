# Write your MySQL query statement below
select prices.product_id,
ifnull(round(sum(prices.price*uni.units)/(sum(uni.units)),2),0) as average_price
from Prices as prices
left join UnitsSold as uni
on uni.product_id=prices.product_id
AND uni.purchase_date BETWEEN prices.start_date AND prices.end_date
group by prices.product_id