select w1.id from Weather as w1 where 
w1.temperature > (select w2.temperature from Weather as w2 where w1.recordDate=DATE_ADD(w2.recordDate,INTERVAL 1 DAY));