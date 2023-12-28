DROP DATABASE IF EXISTS ECommerceDB;
CREATE DATABASE ECommerceDB;

USE ECommerceDB;

DROP TABLE IF EXISTS Products;
CREATE TABLE Products
(
    product_id     int PRIMARY KEY,
    name           varchar(20),
    category       varchar(20),
    price          int,
    stock_quantity int,
    supplier       varchar(20),
    rating         float
);


INSERT INTO Products(PRODUCT_ID, NAME, CATEGORY, PRICE, STOCK_QUANTITY, SUPPLIER, RATING)
VALUES (1001, 'Ultra HD TV 55', 'Electronics', 1200, 30, 'TechWorld', 4.5),
       (1002, 'Bluetooth Headphones', 'Electronics', 150, 50, 'SoundGenius', 4.2),
       (1003, 'Running Shoes', 'Sportswear', 100, 75, 'FastFeet', 4.0),
       (1004, 'Organic Honey 500g', 'Groceries', 8, 100, 'Nature\'s Best', 4.8),
       (1005, 'Classic Blue Jeans', 'Apparel', 60, 40, 'FashionHub', 3.9),
       (1006, 'Stainless Steel Mug', 'Kitchenware', 12, 80, 'HomeEssentials', 4.1),
       (1007, 'Wireless Mouse', 'Electronics', 25, 60, 'GadgetZone', 4.3),
       (1008, 'Fantasy Novel', 'Books', 15, 100, 'BookWorld', 4.7),
       (1009, 'Yoga Mat', 'Sportswear', 20, 50, 'WellnessGoods', 4.4),
       (1010, 'Garden Chair', 'Furniture', 45, 20, 'OutdoorLiving', 4.2);

