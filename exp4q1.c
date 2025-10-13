#include <stdio.h>

int globalVar = 10;

void displayGlobal() {
    printf("Inside displayGlobal function: globalVar = %d\n", globalVar);
}

void modifyGlobal() {
    globalVar += 5;
    printf("Inside modifyGlobal function: globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main function (initial value): globalVar = %d\n", globalVar);
    displayGlobal();
    modifyGlobal();
    printf("Inside main function (after modification): globalVar = %d\n", globalVar);
    return 0;
}