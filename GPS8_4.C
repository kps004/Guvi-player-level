#include <stdio.h>

int main()
{
   int t,n,i,k;
   scanf("%d %d",&n,&k);
   t=n;
   for(i=0;i<k-1;i++)
   {
      t=n*t; 
   }
   printf("%d",t);

    return 0;
}
