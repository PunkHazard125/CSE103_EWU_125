#include <stdio.h>

int main() {
    
    int size1, size2;

    printf("Enter first array size: ");
    scanf("%d", &size1);
    printf("Enter second array size: ");
    scanf("%d", &size2);

    int array1[size1];
    int array2[size2];
    int input1;
    int input2;

    printf("Enter elements for first array: \n");

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &input1);
        array1[i] = input1;
    }
    
    printf("Enter elements for second array: \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &input2);
        array2[i] = input2;
    }

    int merged_size = size1 + size2;
    int merged_array[merged_size];

    for (int i = 0; i < size1; i++)
    {
        merged_array[i] = array1[i];
    }
    
    for (int i = 0; i < size2; i++)
    {
        merged_array[size1 + i] = array2[i];
    }

    int current_num;
    
    for (int i = 0; i < (merged_size - 1); i++)
    {
        for (int j = 0; j < (merged_size - i - 1); j++)
        {
            if (merged_array[j] > merged_array[j + 1])
            {
                current_num = merged_array[j];
                merged_array[j] = merged_array[j + 1];
                merged_array[j + 1] = current_num;
            }
        }
    }
    
    printf("The given first array is: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }
    
    printf("\nThe given second array is: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", array2[i]);
    }

    printf("\nThe merged array is: ");
    for (int i = 0; i < merged_size; i++)
    {
        printf("%d ", merged_array[i]);
    }

    return 0;
}
