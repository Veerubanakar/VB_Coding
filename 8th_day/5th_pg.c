/* Matrix Multiplication */

#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int first[m][n], second[p][q], result[m][q];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

