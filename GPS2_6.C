

#include <stdio.h>

int main()
{
    int a[100],j,p=0,i,n,t,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {  l=0;
        t=a[i];
       for(j=i+1;j<n-1;j++)
       {
           if((t==a[j])&&(t!='\0'))
           {
               a[j]='\0';
                  l++;
           }
       }
       if((l==0)&&(t!=0))
       {
          printf("%d ",t);
       }
       a[i]!='\0';
   }
    return 0;
    
}
