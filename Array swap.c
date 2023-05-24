// Online C compiler to run C program online
#include <stdio.h>
int
main ()
{
  int i, n, x, y, temp;
  scanf ("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  scanf ("%d %d", &x, &y);
  if ((x < n) && (y < n))
    {
      temp = arr[x];
      arr[x] = arr[y];
      arr[y] = temp;

      for (i = 0; i < n; i++)
	{
	  printf ("%d ", arr[i]);
	}
    }
  else
    {
      printf ("invalid");
    }
  return 0;
}
