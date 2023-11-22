#include <stdio.h>
#include <math.h>

int main() {
    
    int size;
    int key;
    int index = -1;
    
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter: ");
        scanf("%d", &array[i]);
    }
    
    printf("Enter Search Key: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            index = i;
            break;
        }
    }
    
    if (index != -1)
    {
        printf("Array Subscript: %d\n", index);
    }
    else
    {
        printf("Not Found\n");
    }
    
    return 0;
}
