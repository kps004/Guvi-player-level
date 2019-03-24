

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
    {   if(min>a[i])
     {
         if(min<k)
         min=a[i];
         
      }
        if(a[i]==k)
        {
            printf("%d",k);
            break;
        }
    }
    if(i==n)
    {
        printf("%d",min);
    }
    return 0;
}
