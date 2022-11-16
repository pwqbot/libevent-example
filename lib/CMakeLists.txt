add_library(fib STATIC fib.cpp)
target_include_directories(fib PUBLIC ${CMAKE_CURRENT_LIST_DIR})
