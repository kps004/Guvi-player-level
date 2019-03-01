

#include <stdio.h>

int main()
{
    int a[100][2],i,j,k=0,n=0,t1=0,t2=0;
    for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
      {
          scanf("%d",&a[i][j]);
      }
    }
    t1=a[0][0];
    t2=a[0][1];
    for(i=0;i<3;i++)
    {
        if(a[i][0]==t1)
        {
           k++; 
        }
        if(a[i][1]==t2)
        {
            n++;
        }
        
      }
      if((k==3)||(n==3))
      {
          printf("yes");
      }
      else{
          printf("no");
      }
     
  
    return 0;
}
