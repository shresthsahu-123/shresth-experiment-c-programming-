#include <stdio.h>

int main() {
    int n, i, num, frequency = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            frequency++;
        }
    }

    printf("The frequency of %d is: %d\n", num, frequency);

    return 0;
}
