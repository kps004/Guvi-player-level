

#include <stdio.h>

int main()
{
  
  long int a[10],n,r,i,j,p,k,l,l1,p1,t;
  scanf("%ld %ld %ld",&n,&p,&k);
  l=0;
  while(n)
  {
      p1=1;
      l1=-1;
       t=n;
     while(t)
     {
         t=t/10;
         l1++;
     }
     
     while(l1)
     {
         p1=p1*10;
         l1--;
     }
     r=n/p1;
     n=n%p1;
     a[l]=r;
     l++;
     
  }
  j=0;
  for(i=p-1;j<k;i++,j++)
  {
     }
  
  printf("%ld",a[i]);
    return 0;
}
