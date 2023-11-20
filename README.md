# sqlite3-demo
This project showcases the integration and utilization of SQLiteCpp library in a database management system. The project initializes a SQLite database named "sqlite-example.db" with read-write and create permissions. It starts by dropping the "test" table if it already exists, ensuring a clean slate for the upcoming operations.
To ensure data consistency and integrity, the project employs transactions. It begins a transaction by creating a Transaction object, ensuring that a series of operations can be executed atomically.

Inside the transaction, the project creates a new "test" table with an integer primary key (id) and a text column (value). Subsequently, it inserts a sample record into the table using an SQL query and retrieves the number of affected rows.

Finally, the project commits the transaction, ensuring that all the changes made within the transaction are permanently saved to the database. The result of the insertion operation is then printed to the console.
This project serves as a practical example of how to interact with SQLiteCpp library in a C++ project, demonstrating essential operations like table creation, data insertion, and transaction management to maintain data integrity.
