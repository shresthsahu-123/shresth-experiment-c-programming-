#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int n = strlen(str);
    int start = 0, end = n - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
