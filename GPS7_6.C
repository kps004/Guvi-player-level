
#include <stdio.h>

int main()
{
    int a[10000],n,k,l=0,m,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
        l++;
        }
    }
    printf(" %d",l);

    return 0;
}
