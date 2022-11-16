find_package(Catch2 3 REQUIRED)

include(Catch)

add_executable(fib_test fib_test.cpp)
target_link_libraries(fib_test PRIVATE fib)
target_link_libraries(fib_test PRIVATE Catch2::Catch2WithMain)

catch_discover_tests(fib_test)
