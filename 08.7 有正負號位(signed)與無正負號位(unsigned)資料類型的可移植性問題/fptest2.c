#include <stdio.h>

void 
set_fpu (unsigned int mode)
{
  asm ("fldcw %0" : : "m" (*&mode));
}

int
main (void)
{
  double a = 3.0, b = 7.0, c;
#ifdef DOUBLE
  set_fpu (0x27F);  /* 使用雙倍精確度(double-precision)的 rounding */
#endif
  c = a / b;

  if (c == a / b) {
    printf ("比對成功\n");
  } else {
    printf ("出現未如預期的結果\n");
  }
  return 0;
}
