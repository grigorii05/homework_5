
#cmake_minimum_required(VERSION 3.4)
#project(banking)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(banking STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Transaction.cpp)
add_library(Account STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Account.cpp)

target_link_libraries(banking PUBLIC Account)
