#include <stdio.h>

int recursiveFibo(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return recursiveFibo(n - 1) + recursiveFibo(n - 2);
}

int main() {
    int num;
    printf("Generate Fibonacci sequence up to term: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", recursiveFibo(i));
    }
    printf("\n");
    return 0;
}
