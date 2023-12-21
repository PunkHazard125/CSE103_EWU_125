#include <stdio.h>
#include <stdlib.h>

int diff_sum(int array1[], int array2[], int size1, int size2) {

    int sum1 = 0, sum2 = 0;

    for (int index = 0; index < size1; index++)
    {
        sum1 = sum1 + array1[index]; 
    }

    for (int index = 0; index < size2; index++)
    {
        sum2 = sum2 + array2[index]; 
    }

    return abs(sum1 - sum2);    

}

int main(void) {

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};

    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    int (*fptr)(int[], int[], int, int);
    fptr = diff_sum;

    int result = fptr(array1, array2, size1, size2);

    printf("Difference: %d\n", result);

    return 0;
}
