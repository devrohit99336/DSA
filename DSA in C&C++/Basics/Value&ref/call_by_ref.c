/*
 * Program  : Call by reference example
 * Language : C
 * Refrence => https://www.log2base2.com/C/pointer/call-by-value-and-call-by-reference-in-c.html
 */

#include <stdio.h>

// set the argument value to 0
void set(int *a)
{
    *a = 0;
    printf("Set : In set function a = %d\n", *a);
}

int main()
{
    int a = 10;
    printf("Main : Before calling set function a = %d\n", a);
    set(&a);

    printf("Main : After calling set function a = %d\n", a);
    return 0;
}