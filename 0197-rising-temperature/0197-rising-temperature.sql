Select w1.id 
From Weather as w1 
Join Weather as w2 on DATEDIFF(w1.recordDate, w2.recordDate) = 1 
Where w1.temperature > w2.temperature;
