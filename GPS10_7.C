

#include <stdio.h>

int main()
{
  
  long int a[10000],i,j,n,k,t=0;
  scanf("%ld %ld",&n,&k);
  
  for(i=n;i<k;i++)
  {
      if(i%2==1)
      {
          t=t+i;
      }
  }
  printf("%d",t);
 
    return 0;
}
