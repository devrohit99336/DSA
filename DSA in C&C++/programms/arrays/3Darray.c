// C Program to store and print 12 values entered by the user

#include <stdio.h>
int main()
{
//   int test[2][3][2];
int test[3][3][3]=
         { {{10,20,30},{40,50,60},{70,80,90}},    //elements of block 1
           {{11,22,33},{44,55,66},{77,88,99}},    //elements of block 2
           {{12,23,34},{45,56,67},{78,89,90}}     //elements of block 3
         };

//   printf("Enter 12 values: \n");

//   for (int i = 0; i < 2; ++i)
//   {
//     for (int j = 0; j < 3; ++j)
//     {
//       for (int k = 0; k < 2; ++k)
//       {
//         scanf("%d", &test[i][j][k]);
//       }
//     }
//   }

  // Printing values with proper index.

  printf("\nDisplaying values:\n");
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 3; ++k)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}