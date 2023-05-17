//wap to arrange row and column elements in ascending order
#include <stdio.h>

int sortMatrix(int matrix[2][2]) 
{
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - 1; j++) {
            for (int k = 0; k < 2 - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - 1; j++) {
            for (int k = 0; k < 2 - j - 1; k++) {
                if (matrix[k][i] > matrix[k + 1][i]) {
                    temp = matrix[k][i];
                    matrix[k][i] = matrix[k + 1][i];
                    matrix[k + 1][i] = temp;
                }
            }
        }
    }
}
int main() 
{
    int matrix[2][2];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    sortMatrix(matrix);
    printf("Matrix after sorting the row and column elements in ascending order:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
