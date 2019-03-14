

#include <stdio.h>

int main()
{
   int a[1000],n,i,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   k=a[i];
   for(i=1;i<n;i++)
   {
       k=k&a[i];
       
       
   }
   printf("%d",k);

    return 0;
}
