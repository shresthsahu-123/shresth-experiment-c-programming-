#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter number of rows and columns for matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter number of rows and columns for matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. Number of columns of A must be equal to number of rows of B.\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter elements of matrix A in row-major order:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B in row-major order:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize matrix C with 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply A and B to get C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
 // Print matrix A
    printf("Matrix A ( %d x %d ):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("Matrix B ( %d x %d ):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Print resultant matrix C
    printf("Product Matrix C = A x B ( %d x %d ):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}