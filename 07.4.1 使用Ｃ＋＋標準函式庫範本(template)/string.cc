#include <list>
#include <string>
#include <iostream>

using namespace std;

int
main ()
{
  list<string> list;
  list.push_back("你好");
  list.push_back("Ｃ＋＋世界");
  cout << "清單的大小 = " << list.size() << '\n';
  return 0;
}
