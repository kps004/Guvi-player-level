
#include <stdio.h>

int
main ()
{
  int a[10000], n, i, j, k, l = 1, max = 0;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 0; i < n; i++)
    {
      l = 1;
      k = a[i];
      for (j = i; j < n; j++)
	{
	  if (a[j] == a[j + 1])
	    {
	      l++;

	    }
	  else
	    {
	      break;
	    }
	}
      if (max < l)
	{
	  max = l;

	}


    }
  printf ("%d", max);
  return 0;
}
