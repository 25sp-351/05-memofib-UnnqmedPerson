#include <stdio.h>

#define MAX 92  // 91 + 1 to avoid overflow on 64-bit signed integer

long long fib_memo[MAX];  // Memoization array

// Fibonacci function with memoization
long long fibonacci(int n) {
    if (n <= 1) return n;
    if (fib_memo[n] != 0) return fib_memo[n];  // Return memoized result
    return fib_memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Initialize the memoization array
    for (int ii = 0; ii < MAX; ii++) {
        fib_memo[ii] = 0;
    }

    // Compute Fibonacci numbers up to 91
    for (int ii = 0; ii <= 91; ii++) {
        printf("Fibonacci(%d) = %lld\n", ii, fibonacci(ii));
    }

    return 0;
}
