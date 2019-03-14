

#include <stdio.h>

int main()
{
int a[10000],i,j,k,l,m,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

    for(i=0;i<n-1;i=i+2)
    {
        l=a[i];
        a[i]=a[i+1];
        a[i+1]=l;
        
    }
    
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
