#include <stdio.h>
void myprint(int num);
int main()
{
    int n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    myprint(n);

    return 0;
}

void myprint(int num)
{
    printf("%d ", num);

    if (num == 1)
    {
        return;
    }
    else
    {
        myprint(num - 1);
    }
}