
#include <stdio.h>

int main()
{
  int a[100],i,j,k,n,l;
  l=32456;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          k=a[i]-a[j];
          if(k>0)
          {
          if(l>k)
          {
              l=k;
          }
          }
      }
  }

printf("%d",l);
    return 0;
}
