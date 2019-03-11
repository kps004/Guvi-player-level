

#include <stdio.h>

int main()
{
    int p,a,c;
    scanf("%d %d",&p,&a);
  if((a>0)&&(p>0))
  {
      if(p>a){
          printf("yes");
          
      }
      if(a>p)
      {
          printf("yes");
          
      }
  }
  else
  {
      printf("no");
  }
    return 0;
}
