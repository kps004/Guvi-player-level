/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

  long int a[10000],i,k,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  k=1;
  if(n==1)
  {
      if(a[0]%2==1)
      {
          printf("odd");
      }
      else
      {
          printf("even");
      }
  }
  else{
  for(i=0;i<n;i++)
  {
      k=k*a[i];
  }
  
   if(k%2==1)
      {
          printf("odd");
      }
      else
      {
          printf("even");
      }
  
  }
  
    return 0;
}
