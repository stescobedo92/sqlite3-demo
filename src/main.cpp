#include <iostream>
#include <SQLiteCpp/Database.h>
#include <SQLiteCpp/Transaction.h>

int main()
{
    try
    {
        SQLite::Database db("sqlite-example.db", SQLite::OPEN_READWRITE | SQLite::OPEN_CREATE);
    }
    catch (std::exception& e)
    {
        std::cout << "exception: " << e.what() << std::endl;
    }

    return 0;
}