
#include <stdio.h>

int main()
{
    int a[100000],n,l,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++)
{
    l=l+a[i]+a[i+1];
}
printf("%d",l);

    return 0;
}
