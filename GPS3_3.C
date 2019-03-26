
#include <stdio.h>

int main()
{
    int  a[1000],i,j=0,k,l,n,max=0;
    scanf("%d %d",&n,&l);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    while(j<l)
    {
        scanf("%d",&a[n]);
        n++;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>=max)
            {
                max=a[i];
            }
        }
        printf("%d ",max);
        j++;
    }

    return 0;
}
