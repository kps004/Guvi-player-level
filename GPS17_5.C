/

#include <stdio.h>

int main()
{
    int i,n,k,min,a[100000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {   if(min<a[i])
     {
         if(min<k+1)
         min=a[i];
         
      }
        
    }

        printf("%d",min);
    
    return 0;
}
