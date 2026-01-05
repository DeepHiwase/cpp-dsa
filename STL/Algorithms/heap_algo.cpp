#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> arr;
  arr.push_back(22);
  arr.push_back(11);
  arr.push_back(55);
  arr.push_back(66);
  arr.push_back(77);

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  make_heap(arr.begin(), arr.end()); // default make max heap -> now vector is heap

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  // insertion
  arr.push_back(99);                 // breaks heap property so run next push_heap after pushing new element in vector🫡
  push_heap(arr.begin(), arr.end()); // ✅

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  // deletion
  pop_heap(arr.begin(), arr.end()); // max element / root element will shift to last leaf node -> now you have to pop manually with vector.pop_back()
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;
  arr.pop_back();// IMP
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  // sort heap
  sort_heap(arr.begin(), arr.end());
  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}