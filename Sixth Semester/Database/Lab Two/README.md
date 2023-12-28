# Lab Two

First of all, run the SQL code present in the [sampledatabase.sql](./sampledatabase.sql) file.

## Tasks

<details>

<summary><h3>One</h3></summary>

- Query

  ```sql
  SELECT *
  FROM customers;
  ```

- Explanation

  It retrieves all the columns from the `customers` table.

</details>

<details>

<summary><h3>Two</h3></summary>

- Query

  ```sql
  SELECT lastname, firstname, jobtitle
  FROM employees;
  ```

- Explanation

      It retrives `lastname`, `firstname` and `jobtitle` column from the `customers` table.

  </details>

<details>

<summary><h3>Four</h3></summary>

- Query

  ```sql
  SELECT DISTINCT jobTitle
  FROM employees;
  ```

- Explanation

  It retrieves the **distinct** `jobTitle` from the `employees` table.`

</details>

<details>

<summary><h3>Five</h3></summary>

- Query

  ```sql
  SELECT firstname, lastname,jobTitle
  from employees
  order by firstname, jobTitle desc;
  ```

- Explanation

  It retrieves `firstname`, `lastname`, `jobTitle` from the `employees` table and arrange them in ascending order by `firstname` and if `firstname` is same then it arrange the matched row in descending order by `jobTitle`.

</details>

<details>

<summary><h3>Six</h3></summary>

- Query

  ```sql
  SELECT DISTINCT city, state
  from customers;
  ```

- Explanation

It return the unique combination of city and state. It ensure that each combination of city and state is appeared exactly once.

</details>

<details>

<summary><h3>Seven</h3></summary>

- Query

  ```sql
  SELECT firstname, lastname
  from employees
  LIMIT 5;
  ```

- Explanation

</details>

<details>

<summary><h3>Eight</h3></summary>

- Query

  ```sql
  SELECT firstname, lastname
  from employees
  limit 10,5;
  ```

- Explanation

</details>

<details>

<summary><h3>Nine and Tem</h3></summary>

- Query

  ```sql
  SELECT officecode, city, phone
  FROM offices
  where country in ('USA', 'France');
  ```

- Explanation

</details>

<details>

<summary><h3>Eleven</h3></summary>

- Query

  ```sql
  SELECT orderNumber
  from orderdetails
  group by orderNumber
  having sum(quantityOrdered * priceEach) > 60000;
  ```

- Explanation

</details>

<details>

<summary><h3>Twelve</h3></summary>

- Query

  ```sql
  SELECT orders.orderNumber, orders.customerNumber, status, orders.shippedDate
  from orders
  where orderNumber in (SELECT orderNumber
                      from orderdetails
                      group by orderNumber
                      having sum(quantityOrdered * priceEach) > 60000);
  ```

- Explanation

</details>

<details>

<summary><h3>Thirteen</h3></summary>

- Query

  ```sql
  SELECT employees.employeeNumber, lastName, firstName
  from employees
  where firstname like 'a%';
  ```

- Explanation

</details>

<details>

<summary><h3>Fourteen</h3></summary>

- Query

  ```sql
  SELECT employeeNumber, lastName, firstName
  from employees
  Where lastname like '%on';
  ```

- Explanation

</details>

<details>

<summary><h3>Fifteen</h3></summary>

- Query

  ```sql
  SELECT employeeNumber, lastName, firstName
  from employees
  Where lastname not like 'B%';
  ```

- Explanation

</details>

<details>

<summary><h3>Eighteen</h3></summary>

- Query

  ```sql
  (SELECT customerNumber, contactLastname from customers)
  UNION
  (SELECT employees.employeeNumber, firstname from employees)
  ORDER BY contactLastName, customerNumber;
  ```

- Explanation

</details>

<details>

<summary><h3>Ninteen</h3></summary>

- Query

  ```sql
  SELECT A.productCode, A.productName, B.orderNumber
  FROM products A
         inner join orderdetails B on A.productCode = B.productCode;
  ```

- Explanation

</details>

<details>

<summary><h3>Twenty</h3></summary>

- Query

  ```sql
  SELECT c.customerNumber, customerName, orderNumber, o.status
  FROM customers c
         LEFT JOIN orders o ON c.customerNumber = o.customerNumber;
  ```

- Explanation

</details>
