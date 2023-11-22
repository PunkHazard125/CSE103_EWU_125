#include <stdio.h>

int main() {
    
    int grade;
    int total = 0;
    float average;
    int counter = 0;

    printf("Enter -1 to quit\n");
    printf("Enter first grade: ");
    scanf("%d", &grade);

    while (grade != -1)
    {
        counter++;
        total = total + grade;
        printf("Enter next grade: ");
        scanf("%d", &grade);
    }
    
    average = total / counter;

    if (total != 0)
    {
        printf("Total: %d\nAverage: %.2f\n", total, average);
    }
    else
    {
        printf("No grades were entered\n");
    }
    
    return 0;
}
