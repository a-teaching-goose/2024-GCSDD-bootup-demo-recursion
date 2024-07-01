#include "move_carts.hpp"
#include "tree.hpp"
#include "util.hpp"
#include "fib.hpp"
#include <iomanip>

int main() {
    test_fib();
}

void test_move_carts() {
    int n;

    std::cout << "Enter the number of items: ";
    std::cin >> n;

    move_items(n, 'A', 'B');
}

void test_fib() {
    for (int i = 1; i < 50; ++i) {
        auto result = timed_fib(i);
        std::cout << i << "," << result.first << "," << std::fixed << std::setprecision(2) << result.second
                  << std::endl;
    }
}
