

#include <stdio.h>

int main()
{
    int a[100000],b[100000],i,n,j,k=0,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            k++ ;
        }
        l++;
    }
    
printf("k=%d l=%d",k,l);
    return 0;
}
