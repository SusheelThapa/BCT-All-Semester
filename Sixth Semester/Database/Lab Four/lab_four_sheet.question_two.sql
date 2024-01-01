drop database if exists lab_four_question_two;
create database lab_four_question_two;

use lab_four_question_two;

drop table if exists student;
drop table if exists course;
create table course
(
    CID   varchar(10),
    Cname varchar(50),
    primary key (CID)
);
create table student
(
    name varchar(50),
    roll int primary key,
    CID  varchar(10),
    foreign key (CID) references course (CID)
);

insert into course values('S001','DBMS');
insert into course values('S002','TOC');
insert into course values('S003','CN');
insert into course values('S004','OS');
insert into course values('S005','Extra');
insert into course values('S006','AI');

insert into student values('Ram',1,'S001');
insert into student values('Shyam',2,'S002');
insert into student values('Hari',3,'S003');
insert into student values('Rita',4,'S001');
insert into student values('Sita',5,'S002');
insert into student values('Gita',6,'S003');

select * from student natural join course;

select * from student natural join course where cname ='DBMS';

drop table  course;

insert into student values('Kartik',7,'S007');