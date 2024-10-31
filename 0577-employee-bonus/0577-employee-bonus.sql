/* Write your T-SQL query statement below */
SELECT a.name, b.bonus
FROM Employee AS a
LEFT JOIN Bonus AS b ON a.empID = b.empID
WHERE bonus < 1000 OR Bonus IS NULL ;