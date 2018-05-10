#include <stdio.h>

int 
main (void)
{
  char c = 255;
  if (c > 128) {
    printf ("\"char\"資料類型為無正負號位(unsigned)的 (c = %d)\n", c);
  } else {
    printf ("\"char\"資料類型為有正負號位(unsigned)的 (c = %d)\n", c);
  }
  return 0;
}
