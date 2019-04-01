#include <stdio.h>

int main()
{
   int a[100],p,i,j,k,l,n,min;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<k;i++)
   {
       min = a[i];
      for(j=0;j<k;j++)
      {
          if(min>=a[i])
          {
              p=j;
              min=a[j];
          }
      }
       
   }

    return 0;
}
