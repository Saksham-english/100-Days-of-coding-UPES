#include<stdio.h> //perform diagonal transversal of a matrix 
int main()
{int rows, cols ;
    printf("Enter the number of rows and columns ");
    scanf("%d%d",&rows,&cols);

    int arr[rows][cols];
    
    printf("Enter the elements of matrix ");
    for( int i=0; i<rows; i++){
    for(int j=0; j<cols;j++)
      { scanf("%d",&arr[i][j]);
      }
    }
     // Printing upper diagonals (including the first row)
    for(int col = 0; col < cols; col++) {
        int i = 0, j = col;
        while(i < cols  && j >= 0) {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Printing lower diagonals (starting from row 1)
    for(int row = 1; row < rows ; row++) {
        int i = row, j = cols - 1;
        while(i < cols  && j >= 0) {
            printf("%d ", arr[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}