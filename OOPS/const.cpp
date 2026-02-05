#include <iostream>

using namespace std;

int main()
{
  // int x = 5;
  // cout << x << endl;
  const int x = 5; // promise 🤝
  cout << x << endl;
  // x = 10; // ❌ error
  // cout << x << endl;

  // promise can break
  // int *p = &x; // in older compilers, it use to work
  // *p = 10; // use to work in older compiler - to break promise

  // const with ptrs
  // int *a = new int;
  // *a = 2;
  // cout << *a << endl;
  // delete a; // to prevent memory leak
  // int b = 5;
  // a = &b;
  // cout << *a << endl;

  // CONST data, NON-CONST ptr
  const int *a = new int;
  // int const *a = new int; // same as above statement
  // *a = 5; // ❌ error - can not reassign data
  int b = 0;
  a = &b; // but can re-assign ptr
  cout << *a << endl;

  // NON-CONST data, CONST ptr
  int *const c = new int(2);
  *c = 20; // ✅
  cout << *c << endl;
  // c = &b; // ❌ error

  // CONST data, CONST ptr
  const int *const d = new int(10);
  // *d = 50; // ❌ error
  // d = &b;  // ❌ error

  return 0;
}