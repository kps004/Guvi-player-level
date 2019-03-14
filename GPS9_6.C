#include <stdio.h>

int main()
{
   int a[1000],n,i,j,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   k=a[0];
   for(i=1;i<n;i++)
   {
       j=a[i];
       k=k^j;
       
       
   }
   printf("%d",k);

    return 0;
}
