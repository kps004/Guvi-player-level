
#include <stdio.h>

int main()
{
  int a[100],i,j,k,n,l=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[i]<a[j])
          {
              l++;
          }
      }
  }
  
printf("%d",l);
    return 0;
}
