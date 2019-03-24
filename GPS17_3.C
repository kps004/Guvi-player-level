
#include <stdio.h>

int main()
{
    int i,n,k,a[10000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("yes");
            break;
        }
    }
    if(i==n)
    {
        printf("no");
    }

    return 0;
}
