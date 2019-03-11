
#include <stdio.h>
int main()
{  int a[1000],i,j,k,min,n,p;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        min=32456;
        p=0;
        for(i=0;i<k;i++)
        {  
            for(j=1;j<n;j++)
            {
                if(min>a[j])
                {
                    min=a[j];
                    p=j;
                }
            }
            
            a[p]=3245;
        }

printf("%d",min);
    return 0;
}
