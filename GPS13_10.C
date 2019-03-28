

#include <stdio.h>

int main()
{

int f,a[1000],n,j,i,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    f=0;
    k=0;
    for(j=0;j<=i;j++)
    {
        if(a[j]%2==0)
        {
            k=k+a[j];
            
        }
        else
        {
            f=1;
            
        }
    }
    if(f==1)
    {
        printf("%d",a[i]);
    }
    else
    {
        printf("%d ",k);
    }
}
    return 0;
}
