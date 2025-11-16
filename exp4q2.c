#include <stdio.h>

int globalVar = 10; // Global variable

void func() {
    printf("Inside func: %d\n", globalVar); // Accessible here
}

int main() {
    func();
    printf("Inside main: %d\n", globalVar); // Accessible here
    return 0;
}

