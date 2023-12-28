DROP DATABASE IF EXISTS LibraryManagement;
CREATE DATABASE LibraryManagement;

USE LibraryManagement;

DROP TABLE IF EXISTS Members;
CREATE TABLE Members
(
    member_id       int PRIMARY KEY,
    name            varchar(20),
    age             int,
    address         varchar(20),
    membership_type varchar(20),
    join_date       date
);

INSERT INTO Members (member_id, name, age, address, membership_type, join_date)
VALUES (101, 'John Doe', 30, '123 Oak St.', 'Regular', STR_TO_DATE('2021-01-10', '%Y-%m-%d')),
       (102, 'Jane Smith', 25, '456 Maple Ave.', 'Premium', str_to_date('2021-02-15', '%Y-%m-%d')),
       (103, 'Emily Johnson', 22, '789 Pine Rd.', 'Regular', str_to_date('2021-03-20', '%Y-%m-%d')),
       (104, 'Michael Brown', 35, '321 Birch Blvd.', 'Premium', str_to_date('2021-02-15', '%Y-%m-%d')),
       (105, 'Sarah Davis', 28, '654 Elm St.', 'Regular', str_to_date('2021-02-15', '%Y-%m-%d'));

