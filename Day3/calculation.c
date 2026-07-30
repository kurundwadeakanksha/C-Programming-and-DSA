#include <stdio.h>
void addMatrices(int a[10][10], int b[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}       
void subtractMatrices(int a[10][10], int b[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}
void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main() {
    int a[10][10], b[10][10], result[10][10];
    int rowA, colA, rowB, colB;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowB, &colB);
    if (rowA != rowB || colA != colB) {
        printf("Matrices must have the same dimensions for addition and subtraction.\n");
        return 1;
    }
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    addMatrices(a, b, result, rowA, colA);
    printf("Result of addition:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    subtractMatrices(a, b, result, rowA, colA);
    printf("Result of subtraction:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    if (colA != rowB) {
        printf("Number of columns in matrix A must be equal to number of rows in matrix B for multiplication.\n");
        return 1;
    }
    multiplyMatrices(a, b, result, rowA, colA, colB);
    printf("Result of multiplication:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}   