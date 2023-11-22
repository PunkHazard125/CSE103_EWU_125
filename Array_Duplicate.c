#include <stdio.h>
#include <math.h>

int main() {
    
    int num[100];
    int input = 0;
    int element = 0;
    int duplicate = -1;
    int counter = 1;
    
    for (int i = 0; i < 100; i++)
    {
        printf("Enter: ");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        num[i] = input;
        element++;
    }
    
    for (int i = 0; i < element; i++)
    {
        counter = 1;
        for (int j = (i + 1); j < element; j++)
        {
            if (num[i] == num[j])
            {
                counter++;
            }
        }
        if (counter > 1 && duplicate != num[i])
        {
            duplicate = num[i];
            printf("Duplicate: %d | Counter: %d\n", duplicate, counter);
        }
    }

    if (duplicate == -1)
    {
        printf("No Duplicates Found\n");
    }
    
    return 0;
}
