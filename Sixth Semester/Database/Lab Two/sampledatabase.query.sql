USE classicmodels;

SELECT *
FROM customers;

SELECT lastname, firstname, jobtitle
FROM employees;

SELECT DISTINCT employees.jobTitle
FROM employees;

SELECT firstname, lastname, employees.jobTitle
from employees
order by firstname, jobTitle desc;

SELECT DISTINCT city, state
from customers;

SELECT firstname, lastname
from employees
LIMIT 5;

SELECT firstname, lastname
from employees
limit 10,5;

SELECT officecode, city, phone
FROM offices
where country in ('USA', 'France');

SELECT orderNumber
from orderdetails
group by orderNumber
having sum(quantityOrdered * priceEach) > 60000;

SELECT orders.orderNumber, orders.customerNumber, status, orders.shippedDate
from orders
where orderNumber in (SELECT orderNumber
                      from orderdetails
                      group by orderNumber
                      having sum(quantityOrdered * priceEach) > 60000);

SELECT employees.employeeNumber, lastName, firstName
from employees
where firstname like 'a%';

SELECT employeeNumber, lastName, firstName
from employees
Where lastname like '%on';

SELECT employeeNumber, lastName, firstName
from employees
Where lastname not like 'B%';

# 16 and 17 skipped

    (SELECT customerNumber, contactLastname from customers)
    UNION
    (SELECT employees.employeeNumber, firstname from employees)
    ORDER BY contactLastName, customerNumber;

SELECT A.productCode, A.productName, B.orderNumber
FROM products A
         inner join orderdetails B on A.productCode = B.productCode;

SELECT c.customerNumber, customerName, orderNumber, o.status
FROM customers c
         LEFT JOIN orders o ON c.customerNumber = o.customerNumber;