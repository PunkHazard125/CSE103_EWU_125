#include <stdio.h>
#include <math.h>

int main() {
    
    int height, width;

    printf("Enter Height in Inches: ");
    scanf("%d", &height);

    printf("Enter Width in Inches: ");
    scanf("%d", &width);

    int perimeter = 2 * (height + width);
    int area = height * width;

    printf("Perimeter of the rectangle is %d inches\n", perimeter);
    printf("Area of the rectangle is %d square inches\n", area);

    return 0;
}
