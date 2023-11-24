#include <stdio.h>

int main() {
    
    int large_array[] = {10, 12, 14, 16, 18, 20, 22};
    int small_array[] = {11, 13, 15, 17, 19, 21};

    int large_size = sizeof(large_array) / sizeof(large_array[0]);
    int small_size = sizeof(small_array) / sizeof(small_array[0]);

    int merged_size = large_size + small_size;
    int merged_array[merged_size];

    for (int i = 0; i < large_size; i++)
    {
        merged_array[i] = large_array[i];
    }
    
    for (int i = 0; i < small_size; i++)
    {
        merged_array[large_size + i] = small_array[i];
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
    
    printf("The given large array is: ");
    for (int i = 0; i < large_size; i++)
    {
        printf("%d ", large_array[i]);
    }
    
    printf("\nThe given small array is: ");
    for (int i = 0; i < small_size; i++)
    {
        printf("%d ", small_array[i]);
    }

    printf("\nThe merged array is: ");
    for (int i = 0; i < merged_size; i++)
    {
        printf("%d ", merged_array[i]);
    }

    return 0;
}
