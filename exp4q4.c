#include <stdio.h>

void counter() {
    static int count = 0;  // Static local variable
    count++;
    printf("Count is %d\n", count);
}

int main() {
    counter(); // Output: Count is 1
    counter(); // Output: Count is 2
    counter(); // Output: Count is 3
    return 0;
}
