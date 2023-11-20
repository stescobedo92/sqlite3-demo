cmake_minimum_required(VERSION 3.8)
project(sqlite3-demo VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SQLiteCpp CONFIG REQUIRED)

add_executable(sqlite3-demo main.cpp)

target_link_libraries(sqlite3-demo PRIVATE SQLiteCpp)