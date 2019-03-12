
#include <stdio.h>

int main()
{
    int a[10000],n,i,j,k;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i<=k)
       {
           printf(" %d",a[i]);
       }
       else
       {
           a[i]='\0';
       }
   }

    return 0;
}
