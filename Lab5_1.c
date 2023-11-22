#include <stdio.h>

int main() {
    
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter: ");
        scanf("%d", &marks[i]);
    }

    int max = marks[0];
    for (int i = 1; i < 5; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }
    
    for (int i = max; i >= 1; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            if (marks[j] >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
