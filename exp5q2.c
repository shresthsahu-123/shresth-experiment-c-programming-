#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0, negative_count = 0;
    int odd_count = 0, even_count = 0;

    for (i = 0; i < n; i++) {
        // Count positive and negative
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }
        // Count odd and even
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Odd numbers: %d\n", odd_count);
    printf("Even numbers: %d\n", even_count);

    return 0;
}
