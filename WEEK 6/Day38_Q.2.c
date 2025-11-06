#include <stdio.h> // check if an matrix is symmetric 

int main() {
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];
    int isSymmetric = 1;   // assume symmetric

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Result
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
