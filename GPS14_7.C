

#include <stdio.h>

int main()
{
 
 int a[10],n,i,l=0,r;
 scanf("%d",&n);
 while(n)
 {
     r=n%2;
     a[l]=r;
     l++;
     n=n/2;
 }
 i=0;
 while(i<l)
 {
     if(a[i]==1)
     {
     printf("%d",i+1);
     break;
     }
     i++;
 }
    return 0;
}
