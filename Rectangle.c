#include <stdio.h>
#include <math.h>

int main() {
    
    float height, width;

    printf("Enter Height in Inches: ");
    scanf("%f", &height);

    printf("Enter Width in Inches: ");
    scanf("%f", &width);

    float perimeter = 2.00 * (height + width);
    float area = height * width;

    printf("Perimeter of the rectangle is %.2f inches\n", perimeter);
    printf("Area of the rectangle is %.2f square inches\n", area);

    return 0;
}
