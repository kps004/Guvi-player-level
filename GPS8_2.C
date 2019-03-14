
#include <stdio.h>

int main ()
{
  int n, a[100], i, j, k, l;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  k = 0;
  for (i = 0; i < n; i++)
    {
      if (k < a[i])
	{
	  k = a[i];
	}
    }
  printf ("%d", k);
  return 0;
}
