# Write your MySQL query statement below
Select c.name
From Customer c
Where c.referee_id!=2 or c.referee_id is null