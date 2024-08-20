# Write your MySQL query statement below
select e.name from Employee as e INNER JOIN Employee as p on e.id=p.managerId
group by p.managerId having count(p.managerId)>=5;