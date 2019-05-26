cmake_minimum_required(VERSION 3.4)

project(banking)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" OFF)

add_subdirectory(banking)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
  add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
  target_include_directories(check PUBLIC)
  #$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/banking>
  #$<INSTALL_INTERFACE:include> 
  #)
  target_link_libraries(check ${PROJECT_NAME} gtest_main)
  add_test(NAME check COMMAND check)
endif()
