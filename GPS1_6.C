/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  char s1[100], s2[100];
  int i, j, k, l, p = 0, q = 0;
  gets (s1);
  //  scanf("\n");
  gets (s2);
  for (k = 0; s1[k] != '\0'; k++);
  for (l = 0; s2[l] != '\0'; l++);
  for (i = 0; i < k; i = i + 2)
    {
      if (s1[i] == s1[i + 1])
	{
	  p++;
	}
      else
	{
	  break;
	}
    }
  for (i = 0; i < l; i = i + 2)
    {
      if (s2[i] == s2[i + 1])
	{
	  q++;

	}
      else
	{
	  break;
	}
    }
  if (p == q)
    {
      printf ("yes");
    }
  else
    {
      printf ("no");
    }
  return 0;
}
