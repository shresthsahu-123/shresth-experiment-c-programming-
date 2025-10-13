#include <stdio.h>

void demo() {
    int local = 10; // Local variable
    printf("Inside function: %d\n", local);
}

int main() {
    demo();
    printf("Outside function: %d\n",); // Error! 'local' not accessible here
    return 0;
}
