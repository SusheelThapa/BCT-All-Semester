DROP DATABASE IF EXISTS IOE_90;
CREATE DATABASE IOE_90;

USE IOE_90;

DROP TABLE IF EXISTS Student;
CREATE TABLE Student
(
    Roll_no INT PRIMARY KEY,
    Name    VARCHAR(20),
    Address VARCHAR(20),
    Batch   INT,
    Dept_no VARCHAR(20)
);

DROP TABLE IF EXISTS Department;
CREATE TABLE Department
(
    Dept_no VARCHAR(20) PRIMARY KEY,
    Name    VARCHAR(30),
    Phone   VARCHAR(15)
);

DROP TABLE IF EXISTS Instructor;
CREATE TABLE Instructor
(
    ID      INT PRIMARY KEY,
    Name    VARCHAR(30),
    Dept_no VARCHAR(20),
    Salary  INT,
    Email   VARCHAR(20)
);

DROP TABLE IF EXISTS Course;
CREATE TABLE Course
(
    Code           INT PRIMARY KEY,
    Name           VARCHAR(30),
    Preq_course_id INT,
    Instructor_id  INT
);

INSERT INTO Student(Roll_no, Name, Address, Batch, Dept_no)
VALUES (1, 'John Doe', '123 Main St', 2022, 'CSE'),
       (2, 'Jane Smith', '456 Oak St', 2023, 'EEE'),
       (3, 'Bob Johnson', '789 Pine St', 2022, 'ME'),
       (4, 'Alice Williams', '101 Maple St', 2023, 'CSE'),
       (5, 'Charlie Brown', '202 Elm St', 2022, 'EEE');

INSERT INTO Department(dept_no, name, phone)
VALUES ('CSE', 'Computer Science', '123-456-7890'),
       ('EEE', 'Electrical Engineering', '987-654-3210'),
       ('ME', 'Mechanical Engineering', '111-222-3333');

INSERT INTO Instructor(id, name, dept_no, salary, email)
VALUES (1, 'Prof. Smith', 'CSE', 60000, 'smith@example.com'),
       (2, 'Prof. Johnson', 'EEE', 55000, 'johnson@example.com'),
       (3, 'Prof. Davis', 'ME', 50000, 'davis@example.com'),
       (4, 'Prof. Lee', 'CSE', 65000, 'lee@example.com'),
       (5, 'Prof. Wang', 'EEE', 60000, 'wang@example.com');

INSERT INTO Course(Code, Name, Preq_course_id, Instructor_id)
VALUES (101, 'Introduction to Programming', null, 1),
       (201, 'Data Structures and Algorithms', 101, 4),
       (301, 'Electrical Circuits', null, 2),
       (401, 'Fluid Mechanics', 301, 3),
       (501, 'Database Systems', 101, 1);