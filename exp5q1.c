#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Need at least two integers to find the second largest.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = arr[0];

    // Initialize largest and second largest properly
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (largest == second_largest) {
        printf("There is no second largest distinct integer.\n");
    } else {
        printf("The second largest integer is: %d\n", second_largest);
    }

    return 0;
}
