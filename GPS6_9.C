/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a[1000],i,j,k,l,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==0)
       {
           for(j=i-1;j>=0;j--)
           {
               if(a[j]==0)
               {
                   break;
               }
               else
               {
                   printf("%d",a[j]);
               }
           }
       }
   }

    return 0;
}
