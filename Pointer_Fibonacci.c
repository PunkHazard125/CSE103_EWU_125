#include <stdio.h>

int fibonacci(int term) {

    if (term == 1)
    {
        return 0;
    }
    else if (term == 2)
    {
        return 1;
    }
    else
    {
        int term1 = 0, term2 = 1;
        int next_term;

        for (int i = 3; i <= term; i++)
        {
            next_term = term1 + term2;
            term1 = term2;
            term2 = next_term;
        }
        
        return next_term;
    }

}

int main(void) {

    int term;

    printf("Enter index of the term of Fibonacci number (1 - nth): ");
    scanf("%d", &term);

    int (*fptr)(int);
    fptr = fibonacci;

    printf("Term number %d of the Fibonacci Series is: %d\n", term, fptr(term));

    return 0;
}
