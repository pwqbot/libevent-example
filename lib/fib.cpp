#include "fib.h"
#include <iostream>
#include <string>
#include <unordered_map>

auto Fib(int64_t pos) -> int64_t {
    if (pos < 0) {
        return -1;
    }
    if (pos == 0 || pos == 1) {
        return 1;
    }
    return Fib(pos - 1) + Fib(pos - 2);
}
