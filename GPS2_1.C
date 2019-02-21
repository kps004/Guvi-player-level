

#include <stdio.h>
#include <string.h>
int
main ()
{
  char s1[1000];
  int i, j, k, l;
  gets (s1); 

  if (s1[0] == 's')
    {
      printf ("yes");
    }
  else
    {
      printf ("no");
    }


  return 0;
}
