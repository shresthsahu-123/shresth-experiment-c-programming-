#include <stdio.h>

// Recursive factorial
unsigned long long recursiveFact(int n) {
    if (n == 0) return 1;
    return n * recursiveFact(n - 1);
}

// Non-recursive factorial
unsigned long long iterativeFact(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Binomial coefficient function
unsigned long long binomialCoeff(int n, int r) {
    unsigned long long factN = recursiveFact(n);
    unsigned long long factR = recursiveFact(r);
    unsigned long long factNR = recursiveFact(n - r);
    return factN / (factR * factNR);
}

int main() {
    int n, r;
    printf("Enter values of n and r (0 <= r <= n): ");
    scanf("%d %d", &n, &r);

    printf("Factorial of %d (recursive): %llu\n", n, recursiveFact(n));
    printf("Factorial of %d (iterative): %llu\n", n, iterativeFact(n));
    printf("Binomial coefficient C(%d, %d) = %llu\n", n, r, binomialCoeff(n, r));

    // Tabulate few binomial coefficients for demonstration
    printf("\nTabulation of binomial coefficients:\n");
    printf(" n  r  |  C(n,r)\n");
    printf("----------------\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%2d %2d | %llu\n", i, j, binomialCoeff(i, j));
        }
    }

    return 0;
}
