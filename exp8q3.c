#include <stdio.h>

// Function that MODIFIES original variables using pointers
void swap(int *a, int *b) {
    printf("Inside swap: a=%d, b=%d\n", *a, *b);
    
    int temp = *a;  // Get value at address a
    *a = *b;        // Put b's value at a's address
    *b = temp;      // Put temp at b's address
    
    printf("Inside swap (after): a=%d, b=%d\n", *a, *b);
}

void increment(int *num) {
    (*num)++;  // Modify original number
    printf("Number now: %d\n", *num);
}

int main() {
    printf("=== POINTER FUNCTIONS (PASS BY REFERENCE) ===\n\n");
    
    int x = 100, y = 200;
    
    printf("BEFORE swap: x=%d, y=%d\n", x, y);
    printf("Addresses: x=%p, y=%p\n\n", (void*)&x, (void*)&y);
    
    swap(&x, &y);  // Pass ADDRESSES!
    
    printf("\nAFTER swap: x=%d, y=%d\n", x, y);
    
    // Demo increment
    printf("\n=== INCREMENT DEMO ===\n");
    increment(&x);  // x becomes 201!
    printf("Final x = %d\n", x);
    
    return 0;
}
