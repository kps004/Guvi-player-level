

#include <stdio.h>

int main()
{
  
  long int a[10000],i,j,k,l,r,n;
  scanf("%ld",&n);
  l=0;
  while(n)
  {
    r=n%10;
    n=n/10;
      a[l]=r;
      l++;
  }
  
  printf("%ld",a[0]+a[l-1]);
    return 0;
}
