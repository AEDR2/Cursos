#include <iostream>
using namespace std;

int a(1);

int f(int& p, int q)
{
  a = p + q;
  p = a * q;

  // ...code manquant...
}

void g()
{
  int a(3);

  cout << f(a, a) << endl;
  cout << a << endl;
}

int main()
{
  g();
  cout << a << endl;
  return 0;
}
