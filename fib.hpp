#pragma once

#include <iostream>
#include <chrono>

/*
 * Generate the n-th Fibonacci sequence number
 * 0, 1, 1, 2, 3, 5, 8, ...
 */
int fib(int n) {
    if (n <= 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

/*
 * Call the fib and record the result and time it takes
 */
std::pair<int, double> timed_fib(int n) {
    auto start = std::chrono::high_resolution_clock::now();

    int result = fib(n);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    return std::make_pair(result, elapsed.count());
}