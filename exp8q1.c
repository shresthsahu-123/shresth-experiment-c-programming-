#include <stdio.h>

int main() {
    // Declare variables
    int num = 42;
    float price = 99.99;
    char grade = 'A';
    
    // Declare POINTERS (notice the *)
    int *intPtr = &num;     // Points to int
    float *floatPtr = &price;  // Points to float
    char *charPtr = &grade;   // Points to char
    
    printf("=== POINTERS EXPERIMENT 1 ===\n");
    printf("Variables: num=%d, price=%.2f, grade=%c\n\n", num, price, grade);
    
    printf("Pointers (Addresses):\n");
    printf("intPtr  = %p (points to %d)\n", (void*)intPtr, *intPtr);
    printf("floatPtr= %p (points to %.2f)\n", (void*)floatPtr, *floatPtr);
    printf("charPtr = %p (points to %c)\n", (void*)charPtr, *charPtr);
    
    return 0;
}
