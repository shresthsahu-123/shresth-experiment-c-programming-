#include <stdio.h>

int recursiveGCD(int a, int b) {
    if (b == 0)
        return a;
    return recursiveGCD(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = recursiveGCD(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
