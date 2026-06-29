# Write your MySQL query statement below
Select Employee.name, Bonus.bonus From Employee Left join Bonus on Employee.empId = Bonus.empId
where bonus<1000 or bonus is null;