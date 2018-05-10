#include <stdio.h>

int
main (void)
{
  int i = 0;
  if (i = 1) {  /* = 應該要改成 == */
    printf ("發生了開發者未預期的運行結果\n");
  }
  return 0;
}
