

#include <stdio.h>

int main()
{
    int a[10000],b[10000],n,t,i,j,k,p,q=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        
    }
    
    for(i=0;i<n;i++)
    {
        k=a[i];
        for(j=i;j<n;j++)
        {
            if(k>=a[j])
            {
                k=a[j];
                p=j;
            }
        }
     
        a[p]=a[i];
        a[i]=k;
    }
    
    for(i=0;i<n;i++)
  {
    t=a[i];
    for(j=0;j<n;j++)
    {
       if(t==b[j])
           {
              printf("%d ",j+1);
           }
         }
   }
    return 0;
}
