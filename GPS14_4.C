
#include <stdio.h>

int main()
{
    int a[1000],n,i,min,c,b;
    
    scanf("%d %d %d",&n,&c,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=c;
    for(i=0;i<=n;i++)
    {
        if((a[i]>=c)&&(a[i]<=b))
        {
            if(min>a[i])
            {
                min=a[i];
            }
        }
    }
    
    printf("%d",min);
    return 0;
}
