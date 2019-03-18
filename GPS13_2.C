/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int d,m,y;
    scanf("%d %d %d ",&d,&m,&y);
    switch(m)
    {
        case 1:
                  printf("January");
                  break;
                 case 2:
                  printf("Febraury");
                  break;
                  case 3:
                  printf("March");
                  break;
                  case 4:
                  printf("April");
                  break;
                  case 5:
                  printf("May");
                  break;
                  case 6:
                  printf("June");
                  break;
                  case 7:
                  printf("July");
                  break;
                  case 8:
                  printf("August");
                  break;
                  case 9:
                  printf("September");
                  break;
                  case 10:
                  printf("October");
                  break;
                  case 11:
                  printf("NOvember");
                  break;
                  case 12:
                  printf("December");
                  break;
    }

    return 0;
}
