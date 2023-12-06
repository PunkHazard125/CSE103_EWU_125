#include <stdio.h>
#include <math.h>

int gcd(int num1, int num2) {
    
    int low_num = (num1 < num2) ? num1 : num2;  
    int GCD;

    for (int check = 1; check <= low_num; check++)
    {
        if (num1 % check == 0 && num2 % check == 0)
        {
            GCD = check;
        }
    }

    return GCD;

}

int main(void) {

    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int GCD = gcd(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, GCD);

    return 0;
}
