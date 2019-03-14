
#include <stdio.h>

int main()
{
  
  int a[100],i,k,m,n,p;
  scanf("%d %d",&n,&k);
  
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
      if((a[i]-a[i+1])==1)
      {
          if(a[i]==k)
          
          {
             printf("%d",i+1);   
            // break;
          }
          if(a[i+1]==k)
          {
              printf("%d",i+2);
            //break;  
          }
      }
  }
    return 0;
}
