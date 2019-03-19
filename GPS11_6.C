
#include <stdio.h>

int main()
{
    int a[10000],n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {l=a[i];
    for(j=i+1;j<n;j++)
    {
        if(l==a[j])
        {
            a[j]='\0';
        }
    }
        
    }
    for(i=0;i<n;i++)
    {if(a[i]!='\0')
        {
        printf("%d ",a[i]);
        }
    } 

    return 0;
}
