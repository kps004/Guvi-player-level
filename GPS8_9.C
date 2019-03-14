
#include <stdio.h>

int main()
{
  int a[100],i,j,n,l=0,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
{
   for(j=0;j<n;j++)
   { k=a[j]-a[i];
       
       if(l<k)
       {
           l=k;
       }
       
   }
}
printf("%d",l);
    return 0;
}
