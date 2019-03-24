

#include <stdio.h>

int main()
{
    int a[1000],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
        printf("%d",a[0]);
    }
  for(i=1;i<n;i++)
  {  
      k=a[i-1];
      j=a[i];
     
    //  printf("%d ",s);
      if(j%k==0)
      {
          printf("%d ",a[i]);
      }
  }


    return 0;
}
