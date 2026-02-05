#include <iostream>

using namespace std;

int x = 20; // GLOBAL VAR

void fun()
{
  int x = 60;
  cout << x << endl;
  ::x = -1;
  cout << ::x << endl;
  return;
}

int main()
{

  x = 10;   // ✅ GLOBAL
  ::x = 10; // ✅ GLOBAL - it also show visually
  int x = 5;
  cout << x << endl;
  cout << ::x << endl; // Accessing global with ::

  {
    int x = 50;
    cout << x << endl;
    cout << ::x << endl;
  }

  fun();

  return 0;
}