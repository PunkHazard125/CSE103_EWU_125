#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    
    int num[50];

    srand(time(NULL));

    for (int i = 0; i < 50; i++)
    {
        num[i] = rand() % 50 + 1;
    }
    
    int input;
    int flag = 1;

    while (1)
    {
        printf("Enter: ");
        scanf("%d", &input);
        if (input == -1)
        {
            printf("Exited\n");
            break;
        }
        flag = 0;
        for (int i = 0; i < 50; i++)
        {
            if (input == num[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Present\n");
        }
        else
        {
            printf("Not Present\n");
        }
    }
    
    return 0;
}
