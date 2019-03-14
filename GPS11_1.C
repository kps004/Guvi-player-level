

#include <stdio.h>

int main()
{
int a[100000],n,i,j,k,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
t=0;
for(i=1;i<n;i++)
{
    t=t+a[i];
}
printf("%d",t);
    return 0;
}
