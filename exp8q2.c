
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = numbers;  // Points to first number
    
    printf("=== EASY POINTER WALK ===\n\n");
    
    // Walk through array
    printf("Step 0: Address=%p, Value=%d\n", (void*)ptr, *ptr);
    
    ptr = ptr + 1;  // Jump to NEXT int (4 bytes!)
    printf("Step 1: Address=%p, Value=%d\n", (void*)ptr, *ptr);
    
    ptr = ptr + 1;  // Jump AGAIN
    printf("Step 2: Address=%p, Value=%d\n", (void*)ptr, *ptr);
    
    ptr--;  // Go BACK (4 bytes)
    printf("Step BACK: Address=%p, Value=%d\n", (void*)ptr, *ptr);
    
    return 0;
}
