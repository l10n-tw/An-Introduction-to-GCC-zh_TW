#include <stdio.h>

int
main (void)
{
#ifdef TEST
  printf ("測試模式\n");
#endif
  printf ("運行中……\n");
  return 0;
}
