
#include <stdio.h>

int main()
{
    int a[10000],n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


for(i=0;i<n;i++)
{
    l=0;
    for(j=n;j>=i;j--)
    {
        l=l+a[j];
    }
    printf("%d ",l);
}
    return 0;
}
