#include <stdio.h>

// Function to perform modular exponentiation
long long modular_exponentiation(long long a, long long b, long long c) {
    long long result = 1;  // Initialize result
    a = a % c;  // Handle negative base case
    
    while (b > 0) {
        if (b % 2 == 1) {  // If b is odd
            result = (result * a) % c;  // Multiply result with a
        }
        a = (a * a) % c;  // Square the base
        b = b / 2;  // Divide b by 2
    }
    
    return result;
}

int main() {
    long long a, b, c;

    // Read inputs
    printf("Enter a, b, and c: ");
    scanf("%lld %lld %lld", &a, &b, &c);

    // Call the function and print the result
    printf("Result: %lld\n", modular_exponentiation(a, b, c));

    return 0;
}
