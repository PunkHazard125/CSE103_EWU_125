#include <stdio.h>

void sort_array(int array[], int size) {
    
    int current_value;

    for (int check = 0; check < (size - 1); check++)
    {
        for (int index = 0; index < (size - check - 1); index++)
        {
            if (array[index] < array[index + 1])
            {
                current_value = array[index];
                array[index] = array[index + 1];
                array[index + 1] = current_value;
            }
        }
    }

}

int main(void) {

    int array[5] = {1, 2, 3, 4, 5};

    void (*fptr)(int[], int);
    fptr = sort_array;

    fptr(array, 5);

    printf("Given array elements in descending order: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
