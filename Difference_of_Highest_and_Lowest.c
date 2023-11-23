#include <stdio.h>

int main() {
    
    int num;

    printf("Enter: ");
    scanf("%d", &num);

    int low = num;
    int high = num;

    if (num == -1)
    {
        printf("Exited\n");
        return 0;
    }
    else
    {
        while (num != -1)
        {
            printf("Enter: ");
            scanf("%d", &num);
            if (num == -1)
            {
                break;
            }
            if (num < low)
            {
                low = num;
            }
            if (num > high)
            {
                high = num;
            }
        }
    }
    
    int result = high - low;

    printf("Result: %d\n", result);
    
    return 0;
}
