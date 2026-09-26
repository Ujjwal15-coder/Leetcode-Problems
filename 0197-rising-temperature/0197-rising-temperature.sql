Select w1.id
From Weather as w1
JOIN Weather as w2
ON SUBDATE(w1.recordDate,1) = w2.recordDate 
WHERE w1.temperature > w2.temperature;


-- means W1 ke record date me 1 minus karke w2 record date ke equal aa raha hai
-- Self-join: Compare rows within the same table.

-- DATEDIFF(): Check the difference between two dates.

-- WHERE: Filter rows based on a condition.

-- w1: Current day; w2: Previous day.