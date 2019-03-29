
#include <stdio.h>

int main()
{
    int a[10000],i,n,j,k,arr=1,fact=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
i=0;
while(i<n)
{
    arr=arr*a[i];
    i++;
}
i=n;
while(i>0)
{
    fact=fact*i;
    i--;
}
if(fact==arr)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
