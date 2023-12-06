#include <stdio.h>
#include <math.h>
#define PI 3.14159

float circle_area(float radius) {

    float area = PI * pow(radius, 2);
    return area;
}

int greater_than_or_less_than_25(float area) {

    if (area > 25.00)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void) {

    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = circle_area(radius);

    printf("Area: %.2f\n", area);

    int flag = greater_than_or_less_than_25(area);

    if (flag == 1)
    {
        printf("Area is greater than 25\n");
    }
    else
    {
        printf("Area is less than 25\n");
    }

    return 0;
}
