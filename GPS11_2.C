
#include <stdio.h>

int main()
{
   int n,m,a[100],i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[1]<a[n-1]){
    l=a[n-1];
    a[n-1]=a[1];
    a[1]=l;
    }
    m=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            m=m+a[i];
        }
        else
            {
                m=m+a[i+1];
            }
          
    }

printf("%d",m);
    return 0;
}
