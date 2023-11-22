#include <stdio.h>

int main() {
    
    int serial = 10;

    for (int i = 1; i <= serial; i++)
    {
        if (i == 7)
        {
            continue;
        }
        printf("%d. Hello World\n", i);
        
    }
       
    return 0;
}
