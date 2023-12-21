#include <stdio.h>

long long binary(int dec) {

    long long bin = 0;
    long long base = 1;

    while (dec > 0) {
        int remainder = dec % 2;
        bin = bin + remainder * base;
        dec = dec / 2;
        base = base * 10;
    }

    return bin;
}

int main(void) {

    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    long long (*fptr)(int);
    fptr = binary;

    printf("Binary value of %d is %d\n", num, fptr(num));

    return 0;
}
