
#include <stdio.h>

int main()
{
  int a[100],i,k,n,l=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  k=0;
for(i=0;i<n;i++)
{
   if((a[i+1]-a[i])>=1)
   {
       l++;
   }
   else
   {
       l=0;
   }
   if(k<(l+1))
   {
       k=l+1;
   }
}
printf("%d",k);

    return 0;
}
