#include <stdio.h>

int main() {
    { // Start of block 1
        int blockVar1 = 5;
        printf("Inside block 1: %d\n", blockVar1); // OK
    }
    // printf("Outside block 1: %d\n", blockVar1); // Error: blockVar1 undefined

    { // Start of block 2
        int blockVar2 = 10;
        printf("Inside block 2: %d\n", blockVar2); // OK
    }
    // printf("Outside block 2: %d\n", blockVar2); // Error: blockVar2 undefined

    return 0;
}
