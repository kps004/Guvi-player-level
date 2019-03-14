/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int a[100],i,j,k,n='\0',l=0,z=0,y=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
{
    if(a[i]%2==1)
    {
        l++;
    }
    else
    {
        k=i;
    }
    if(a[i]%2==0)
    {
         z++;     
    }
    else
    {
        y=i;
    }
}
    if(l>1)
    {
        printf(" %d",a[k]);
      }
      
          
          if(z>1){
          printf("%d",a[y]);
          }
      

    return 0;
}
