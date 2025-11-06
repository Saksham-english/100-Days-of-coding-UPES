#include <stdio.h> //Find the sum of main diagonal elements for the square matrix 

int main() {
    int n, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];  // main diagonal elements: (0,0), (1,1), (2,2) ...
        //where the rows = columns 
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
