#include <iostream>
#include "buffer.h"

using namespace std;

int
main ()
{
  Buffer<float> f(10);
  f.insert (0.25);
  f.insert (1.0 + f.get(0));
  cout << "儲存的數值為 = " << f.get(0) << '\n';
  return 0;
}
