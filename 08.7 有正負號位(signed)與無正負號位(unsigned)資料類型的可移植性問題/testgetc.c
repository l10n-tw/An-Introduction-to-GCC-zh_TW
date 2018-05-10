#include <stdio.h>

int
main (void)
{
  char c;
  while ((c = getchar()) != EOF) /* not portable */
    {
      printf ("讀取到 c = '%c'\n", c);
    }
  return 0;
}
