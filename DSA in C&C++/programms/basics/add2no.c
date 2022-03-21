#include <stdio.h>

int main(){
    printf("\n welcome rohit \n \n");
    //BODMAS bracket of division multiplication addition subtraction
    /*** 
     * BODMAS rule -
     * B = Bracket ()
     * O = Of (noting)
     * D = Division (/)
     * M = Multiplication(*)
     * A = Addition(+)
     * S = Subtraction(-)
    */

    int a = 2 + 5 * 3; //17 => 5*3 = 15, 15+2 =17
    int b = (2 + 5) * 3; //21 => 5+2 = 7, 7*3 = 21
    int c = 5 * 3 + 8 / 2; // 19 => 8/2 = 4, 5*3 = 15, 15+4 = 19

    // if Precedence equal so apply Associativity for solve this case - 
    int d = 32 * 8 / 2; // 128 => 32*8 = 256, 256/2 = 128
    int e = 32 / 8 * 2; // 8 => 32/8 = 4, 4*2 = 8

    int f = 10;
    int g = ++f;
    int h = f++;
    int i = ++f + 2;
    int j = f++ + ++f;
    int k = g+h;

    // print values
    printf("value of a:%d \n",a);
    printf("value of b:%d \n",b);
    printf("value of c:%d \n",c);
    printf("value of d:%d \n",d);
    printf("value of e:%d \n",e);
    printf("value of f:%d \n",f);
    printf("value of g:%d \n",g);
    printf("value of h:%d \n",h);
    printf("value of i:%d \n",i);
    printf("value of j:%d \n",j);
    printf("value of k:%d \n",k);
}