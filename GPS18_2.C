
#include <stdio.h>

int main()
{
   int a[100],i,p,j,n,t,l=0,max;
   scanf("%d",&n);
   
   while(n)
   {
       t=n%10;
       n=n/10;
      a[l]=t;
      l++;
   }
    
     for(i=0;i<l;i++)
     {
         t=a[i];
         for(j=i;j<l;j++)
         {
              
              if(t<=a[j])
              {
                  p=j;
                  max=a[j];
              }
         }
         a[p]=a[i];
         a[i]=max;
     }
     for(i=0;i<l;i++)
     {
         printf("%d",a[i]);
     }
    return 0;
}
