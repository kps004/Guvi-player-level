

#include <stdio.h>

int main()
{
   int a[10000],n,i,j,k,l,p,max=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++)
   {
      k=a[i];
      for(j=0;j<n;j++)
      {
          l=a[j];
          p=k|l;
          if(max<p)
          {
              max=p;
          }
          
      }
       
       
   }
   printf("%d",max);

    return 0;
}
