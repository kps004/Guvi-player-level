
#include <stdio.h>

int main()
{
    int a[1000],n,i,s=0,k;
    
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            s++;
        }
    }
    if(s==0)
    {
        printf("no");
    }
    else
    {
        printf("yes %d",s);
    }
    return 0;
}
