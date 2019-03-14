
#include <stdio.h>

int main()
{
  
  int a[10],n,r,i,j,l;
  scanf("%d",&n);
  l=0;
  while(n)
  {
      r=n%10;
      n=n/10;
     // printf("%d",r);
      a[l]=r;
      l++;
  }
  for(i=0;i<l;i++)
  {
      for(j=i+1;j<l;j++)
      {
          if(a[i]==a[j])
          {
              printf("yes");
              goto label;
              
          }
      }
  }
  
 label: if(i==l)
  {
      printf("no");
  }
    return 0;
}
