#include<stdio.h>
#include<ctype.h>
int main()
{
   char str[100];

   printf("Enter a lower-case String: ");
   scanf("%[^\n]", str);


   for(int i=0; str[i]!='\0'; i++)
   {
      str[i] = toupper(str[i]);
   }

   printf("Upper case string is: %s\n", str);

   return 0;
}

//refrence => https://www.knowprogram.com/c-programming/convert-lowercase-to-uppercase/