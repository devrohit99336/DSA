#include <stdio.h>
int main()
{

    printf("Welcome to DataFlair tutorials!\n\n");

    int term1 = 0, term2 = 1, next_term = 0, limit;

    printf("Enter a number till which you want to display the Fibonacci series: ");
    scanf("%d", &limit);

    printf("The Fibonacci series till %d is: %d, %d, ", limit, term1, term2); // term1 = 0 and term2 = 1

    next_term = term1 + term2;
    while (next_term <= limit)
    {
        printf("%d ", next_term);
        term1 = term2;
        term2 = next_term;
        next_term = term1 + term2;
    }
    return 0;
}