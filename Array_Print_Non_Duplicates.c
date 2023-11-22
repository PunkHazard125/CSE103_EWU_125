#include <stdio.h>
#include <math.h>

int main() {
    
    int num[20];
    int duplicate = 0;

    for (int index = 0; index < 20; index++)
    {
        duplicate = 0;
        printf("Enter (10 - 100): ");
        scanf("%d", &num[index]);
        if (index == 0)
        {
            printf("%d\n", num[index]);
        }
        else
        {
            for (int check = 0; check < index; check++)
            {
                if (num[index] == num[check])
                {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate == 0)
            {
                printf("%d\n", num[index]);
            }
        }
    }
    
    return 0;
}
