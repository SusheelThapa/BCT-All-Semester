USE IOE_90;

SELECT Student.Roll_no, Student.Name
from Student;

SELECT Student.Roll_no, Student.Name
from Student
where Batch = 2022;

SELECT *
from Instructor
where Salary > 20000;

Select Code, c.Name, i.Name
from Course as c,
     Instructor as i
Where c.Instructor_id = i.id;

SELECT *
from Student
where Student.Dept_no = 'CSE';