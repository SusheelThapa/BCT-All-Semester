DROP DATABASE IF EXISTS Lab_Four_Question_One;
CREATE DATABASE Lab_Four_Question_One;

USE Lab_Four_Question_One;

DROP TABLE IF EXISTS employee;
CREATE TABLE employee
(
    eid         int not null primary key,
    name        varchar(20),
    salary      int,
    designation varchar(20)
);

insert into employee
values (12, 'Ram', 30000, 'Peon');
insert into employee
values (13, 'Hari', 12000, 'Supervisor');
insert into employee
values (14, 'Shyam', 13000, 'Store Keeper');
insert into employee
values (15, 'Rita', 14000, 'Librarian');
insert into employee
values (16, 'Gita', 15000, 'Cook');
insert into employee
values (17, 'Sita', 18000, 'Gate Keeper');
insert into employee
values (18, 'Dinesh', 12000, 'Supervisor');
insert into employee
values (19, 'Nabin', 12000, 'Supervisor');
insert into employee
values (50, 'Ramesh', 20000, 'Admin Officer');
insert into employee
values (10, 'Shailesh', 10000, 'Receptionist');

SELECT *
FROM employee;

SET SQL_SAFE_UPDATES = 0;
update employee
set salary=50000
where designation = 'Supervisor';

update employee set name='Hari' where eid = 50;

delete from employee where eid=10;

select avg(employee.salary) from employee;

select count(*) from employee;

select sum(employee.salary) from employee;

update employee set salary=1.1*salary;