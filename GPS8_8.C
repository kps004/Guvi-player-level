/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

  int a[100000],i,j,k,n,p,min=0;
  scanf("%d %d",&n,&k);
  n=n+k;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      k=a[i];
     
      for(j=i+1;j<n;j++)
      {
          if(a[j]<=k)
          {
             k=a[j];
             p=j;
          }
          
         
          
      }
      a[p]=a[i];
      a[i]=k;
    //  printf("k=%d ",k);
      
        }
        i=0;
        while(i<n)
        {
            printf("%d ",a[i] );
            i++;
        }

    return 0;
}
