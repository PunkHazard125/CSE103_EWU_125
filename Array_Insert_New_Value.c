#include <stdio.h>

int main() {
    
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];
    int input;

    printf("Enter %d array elements in ascending order: \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &input);
        array[i] = input;
    }
    
    int new_value;

    printf("Enter new value to be inserted: ");
    scanf("%d", &new_value);

    int new_size = size + 1;
    int new_array[new_size];
    new_array[new_size - 1] = new_value;
    for (int i = 0; i < (new_size - 1); i++)
    {
        new_array[i] = array[i];
    }

    int current_num;

    for (int i = 0; i < (new_size - 1); i++)
    {
        for (int j = 0; j < (new_size - i - 1); j++)
        {
            if (new_array[j] > new_array[j + 1])
            {
                current_num = new_array[j];
                new_array[j] = new_array[j + 1];
                new_array[j + 1] = current_num;
            }
        }
    }

    printf("The original array list: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\nThe new array list: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", new_array[i]);
    }

    return 0;
}
