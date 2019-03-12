
#include <stdio.h>

int main()
{
    int a[10000],n,k,p,i,j;
    
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
      
      
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
             p=a[i];
             a[i]=a[j];
             a[j]=p;
              
          }
      }
      
        
    }
    
for(i=0;i<n;i++)
{
    if(a[i]<k)
    {
    printf("%d",a[i]);
   }
}
    return 0;
}
