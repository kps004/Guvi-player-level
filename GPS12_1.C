

#include <stdio.h>

int main()
{
    int a[100000],b[100000],i,n,j,k,l;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d");
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d",a[i]);
            }
        }
    }
    

    return 0;
}
