

#include <stdio.h>

int main()
{
    int n,i,j,r,t;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        if(n%i==0)
        {  
            t=n%i;
             r=0;
            for(i=3;i<t;i++)
            {
               if(n%i==0)
               {
                   r++;
               }
            }
            if(r==0)
            {
                printf("%d",t);
            }
        }
        
    }

    return 0;
}
