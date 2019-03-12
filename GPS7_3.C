
#include <stdio.h>

int main()
{
    int a[100000],b[100000],i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        k=a[i];
        for(j=0;j<n;j++)
        {
            if(k==b[j])
            {
                printf(" %d",b[j]);
                b[j]='\0';
                break;
            }
        }
        
    }

    return 0;
}
