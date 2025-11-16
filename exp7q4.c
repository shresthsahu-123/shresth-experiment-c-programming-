#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address present;

    // Copy the present address string into the union's home_address field
    strcpy(present.home_address, "123 Main Street, Apartment 45");

    printf("Present Address:\n%s\n", present.home_address);

    return 0;
}
