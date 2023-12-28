# Lab Three

## E-Commerce Products Management

### Scenario

You are managing an e-commerce database. The primary table you'll work with is the Products table, which contains
details about different products available for purchase.

### Tasks:

- Create a database called `ECommerceDB`.

- Use the database `ECommerceDB`.

- Create a table Products with the following
  schema `Products(product_id, name, category, price, stock_quantity, supplier, rating)`

- Populate the Products table with at least 10 different products.

  | product_id | name                 | category    | price | stock_quantity | supplier       | rating |
          |------------|----------------------|-------------|-------|----------------|----------------|--------|
  | 1001       | Ultra HD TV 55'      | Electronics | 1200  | 30             | TechWorld      | 4.5    |
  | 1002       | Bluetooth Headphones | Electronics | 150   | 50             | SoundGenius    | 4.2    |
  | 1003       | Running Shoes        | Sportswear  | 100   | 75             | FastFeet       | 4.0    |
  | 1004       | Organic Honey 500g   | Groceries   | 8     | 100            | Nature's Best  | 4.8    |
  | 1005       | Classic Blue Jeans   | Apparel     | 60    | 40             | FashionHub     | 3.9    |
  | 1006       | Stainless Steel Mug  | Kitchenware | 12    | 80             | HomeEssentials | 4.1    |
  | 1007       | Wireless Mouse       | Electronics | 25    | 60             | GadgetZone     | 4.3    |
  | 1008       | Fantasy Novel        | Books       | 15    | 100            | BookWorld      | 4.7    |
  | 1009       | Yoga Mat             | Sportswear  | 20    | 50             | WellnessGoods  | 4.4    |
  | 1010       | Garden Chair         | Furniture   | 45    | 20             | OutdoorLiving  | 4.2    |

- Write an SQL query to display all products with a rating of 4 or higher.

- Write an SQL query to list the top 3 cheapest products in the 'Sportswear' category.

- Write an SQL query to display the top 5 most expensive products.

- Write an SQL query to add a new column `description (VARCHAR type)` to the `Products` table.

## Library Management

### Background

You are working with a `LibraryManagement` database.
The focus is the `Members` table, which stores information about the members of the library.

### Tasks
~
- Create a database called `LibraryManagement`
- Use database `LibraryManagement`.
- Create a table `Members` with the following
  schema: `Members(member_id, name, age, address, membership_typee, join_date)`
- Populate the `Members` with the provided sample data.

  | member_id | name          | age | address         | membership_type | join_date  |
            |-----------|---------------|-----|-----------------|-----------------|------------|
  | 101       | John Doe      | 30  | 123 Oak St.     | Regular         | 2021-01-10 |
  | 102       | Jane Smith    | 25  | 456 Maple Ave.  | Premium         | 2021-02-15 |
  | 103       | Emily Johnson | 22  | 789 Pine Rd.    | Regular         | 2021-03-20 |
  | 104       | Michael Brown | 35  | 321 Birch Blvd. | Premium         | 2021-04-25 |
  | 105       | Sarah Davis   | 28  | 654 Elm St.     | Regular         | 2021-05-30 |

- Write an SQL query to display all `Premium` members who joined after January 2021.
- Write an SQL query to list member living on `789 Pine Rd.`
- Write an SQL query to add a new column phone_number (VARCHAR type) to the Members table.
- Write an SQL query to remove the age column from the Members table.