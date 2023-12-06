#include <stdio.h>
#include <math.h>

int main(void) {

    int row, col;

    printf("Enter row and column:\n");
    scanf("%d %d", &row, &col);

    int matrix1[row][col];
    int matrix2[row][col];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix by row:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    int equal = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                equal = 0;
                break;
            }
        }
    }
    
    printf("The given first matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("The given second matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("The matrices can be compared:\n");
    if (equal == 1)
    {
        printf("Two matrices are equal\n");
    }
    else
    {
        printf("Two matrices are not equal\n");

    }

    return 0;
}
