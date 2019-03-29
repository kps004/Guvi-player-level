

#include <stdio.h>
#include <math.h>

int main()
{
    int a[1000],k=0,i,j,M,n,p=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
    M=floor(n/2);
    }
    else
    {
        M=floor((n-1)/2);
    }
 
   for(i=0;i<M;i++)
   {
       t=a[i];
       for(j=i;j<M;j++)
       {
           if(t>=a[j])
           {
               t=a[j];
               p=j;
           }
       }
     
       a[p]=a[i];
       a[i]=t;
   }
   
   for(i=M;i<n;i++)
   {
       t=a[i];
       for(j=i;j<n;j++)
       {
           if(t<=a[j])
           {
               t=a[j];
               p=j;
           }
       }
       a[p]=a[i];
       a[i]=t;
   }

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}
