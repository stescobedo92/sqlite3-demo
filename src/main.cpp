#include <iostream>
#include <SQLiteCpp/Database.h>
#include <SQLiteCpp/Transaction.h>

int main()
{
    try
    {
        SQLite::Database db("sqlite-example.db", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);
        db.exec("DROP TABLE IF EXISTS test");

        // Begin transaction
        SQLite::Transaction transaction(db);

        db.exec("CREATE TABLE test (id INTEGER PRIMARY KEY, value TEXT)");

        int nb = db.exec("INSERT INTO test VALUES (NULL, \"example test\")");
        std::cout << "INSERT INTO test VALUES (NULL, \"example test\")\", returned " << nb << std::endl;

        // Commit transaction
        transaction.commit();
    }
    catch (std::exception& e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    return 0;
}