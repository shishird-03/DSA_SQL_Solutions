# Write your MySQL query statement below
select max(num) as num
From(
     SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) AS unique_numbers;



