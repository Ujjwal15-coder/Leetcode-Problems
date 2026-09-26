SELECT v.customer_id, COUNT(customer_id) as count_no_trans 
from Visits as v
LEFT JOIN Transactions as t
ON v.visit_id = t.visit_id
Where t.transaction_id IS NULL
GROUP BY v.customer_id;