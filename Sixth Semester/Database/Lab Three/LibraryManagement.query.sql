# Display all Premium membes who joined after January 2021
SELECT *
FROM Members
WHERE membership_type = 'Premium' && join_date > STR_TO_DATE('2021-01-01', '%Y-%m-%d');

# List member living on 789 Pine Rd.
SELECT *
FROM Members
WHERE address = '789 Pine Rd.';

# Add a new column phone_number to the Members table
ALTER TABLE Members
    ADD COLUMN (phone_number varchar(10));~~

# Remove the age column from the Members table
ALTER TABLE Members
    DROP COLUMN age;