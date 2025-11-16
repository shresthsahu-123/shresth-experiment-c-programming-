#include <stdio.h>

typedef struct {
    char name[50];
    float basicPay;
    float grossSalary;
} Employee;

int main() {
    Employee employees[100];
    int i, n = 100;
    float DA;

    printf("Enter details for %d employees:\n", n);
    for (i = 0; i < n; i++) {
        printf("Employee %d name: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Basic pay: ");
        scanf("%f", &employees[i].basicPay);
        DA = 0.52f * employees[i].basicPay;
        employees[i].grossSalary = employees[i].basicPay + DA;
    }

    printf("\nEmployee Name\tGross Salary\n");
    printf("----------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%.2f\n", employees[i].name, employees[i].grossSalary);
    }

    return 0;
}
