# Display the all products with a rating of 4 or higher.
SELECT *
FROM Products
WHERE rating > 4;

# Display the top 5 expensive products
SELECT *
FROM Products
ORDER BY PRICE desc
LIMIT 5;

# List the top 3 cheapest products in the 'Sportwear' category.
SELECT *
FROM Products
WHERE category = 'Sportswear'
ORDER BY price
LIMIT 3;

# Add a new column description(VARCHAR type) in Products table
ALTER TABLE Products
    ADD COLUMN (Description VARCHAR(100));

