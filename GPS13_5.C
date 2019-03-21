#include <stdio.h>
#include<conio.h>
void main()
{
        
        int n,i,j,count=0,a[100];
   
   scanf("%d",&n);
       for(i=0;i<n;i++)
       {
     
     scanf("%d",&a[i]);
       }
      
      for(i=0;i<n;i++)
       {
        
        count=0;
          for(j=0;j<n;j++)
          {
              if(a[j]%a[i]==0)
              {
                  count++;
              }
          }
          if(count==n)
        
        {
              printf("%d",a[i]);
              break;
          }
       }
    getch();
}
