

#include <stdio.h>

int main()
{
   int a[1000],n,i,j,k,l;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   l=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
       k=a[i]&a[j];
       if(l<k)
       {
           l=k;
       }
       }
   }
   printf("%d",l);

    return 0;
}
