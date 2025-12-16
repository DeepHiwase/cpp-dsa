#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Comparators -> function or object that used to compare elements
 * use to decide order of element inside a DS like SET, MAP, VECTOR, HEAP
 * Two ways to implement ->
 * 1. Function Pointers -> function that implement the logic of comparison
 */

bool myComparator(int a, int b)
{
  // if (a < b)// ASCENDING
  if (a > b)// DESCENDING
    return true;

  return false;
}

void print(vector<int> &vec)
{
  for (int &x : vec)
  {
    cout << x << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> vec = {1, 3, 5, 6, 2};

  // sort(vec.begin(), vec.end());// ✅
  // sort(begin(vec), end(vec));               // ✅ default -> ASCENDING
  sort(begin(vec), end(vec), myComparator); // DECENDING

  print(vec);

  return 0;
}