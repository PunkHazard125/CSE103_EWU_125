#include <stdio.h>

int even(int *ptr) {

    if (*ptr % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main(void) {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int (*fptr)(int *);
    fptr = even;

    int result = fptr(&num);

    if (result == 1)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}
