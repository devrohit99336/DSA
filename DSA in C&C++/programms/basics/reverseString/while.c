#include <stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    /*
        always declare the variables before using them
    */
    int i = 1; // declaration and initialization at the same time

    printf("\nPrinting numbers using while loop from 1 to 10\n\n");

    /*
        while i is less than 10
    */
    while (i <= 10)
    {
        printf("%d ", i);

        /*
            Update i so the condition can be met eventually
            to terminate the loop
        */
        i++; // same as i=i+1;
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}