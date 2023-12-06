#include <stdio.h>

int hello_world(int num) {

    if (num == 0)
    {
        return 0;
    }
    else
    {
        printf("Hello World\n");
        hello_world(num - 1);
    }
    
}

int main(void) {

    int num;

    printf("Enter how many times: ");
    scanf("%d", &num);

    hello_world(num);

    return 0;
}
