#include <stdio.h>

int main() {
    
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int num[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num[i]);
    }

    printf("The given array is: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    int counter = 0;
    int result;
    
    for (int index = 0; index < size; index++)
    {
        counter = 0;
        for (int check = 0; check < size; check++)
        {
            if (num[check] == num[index])
            {
                counter++;
            }
        }
        if (counter % 2 != 0)
        {
            result = num[index];
            break;
        }
    }

    printf("\nThe element odd number of times is: %d\n", result);    

    return 0;
}
