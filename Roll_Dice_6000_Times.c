#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main() {
    
    int face;
    int roll;
    
    srand(time(NULL));

    int frequency[SIZE] = {0};

    for (roll = 1; roll <= 6000; roll++)
    {
        face = rand() % 6 + 1;
        frequency[face]++;
    }

    printf("%s%13s\n", "Element", "Frequency");
    
    for (int i = 1; i < SIZE; i++)
    {
        printf("%7d%13d\n", i, frequency[i]);
    }

    return 0;
}
