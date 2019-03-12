
#include <stdio.h>

int main()
{
    int a[10000],n,x,s=0,i;
scanf("%d %d",&n,&x);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    s=s+a[i];
}
if(s==x)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
