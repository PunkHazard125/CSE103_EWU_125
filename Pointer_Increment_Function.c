#include <stdio.h>

void increment(int *ptr) {

    *ptr = *ptr + 1;

}

int main(void) {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Original Number: %d\n", num);
    
    increment(&num);

    printf("Number after increment: %d\n", num);

    return 0;
}
