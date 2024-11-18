/* Write your T-SQL query statement below */
SELECT name
FROM SalesPerson 
WHERE sales_id NOT IN (
    SELECT a.sales_id
    FROM Orders AS a
    INNER JOIN Company AS b ON a.com_id = b.com_id
    WHERE b.name = 'RED'
)