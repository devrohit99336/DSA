#include <stdio.h>

int main(){
    int a = 5;
    a = a+1;   //5+1 = 6
    printf("value of a: %d \n",a); //6
    printf("value of a: %d \n",a++); // 6 then 6+1 =1 so a =7
    printf("value of a: %d \n",a); // 7
    printf("value of a: %d \n",++a); // 8 -> 1+7 = 8
}