
#include <stdio.h>

int main()
{
int a[100],n,i,j=0,k;
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
        j=2;
        break;
    }
}
if(j==0)
{
    printf("no");
}

    return 0;
}
