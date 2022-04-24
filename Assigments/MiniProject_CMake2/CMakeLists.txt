cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(bookShop VERSION 1.0)


add_library(myBookLib STATIC 
src/printMenu.cpp
src/addBook.cpp
src/buyBook.cpp
src/searchBook.cpp
src/editBook.cpp
)

target_include_directories(myBookLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(bookShop main.cpp
)
target_link_libraries(bookShop PUBLIC myBookLib)  