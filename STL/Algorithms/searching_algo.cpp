#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> arr;
  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(40);
  arr.push_back(50);

  int target = 40;
  bool found = binary_search(arr.begin(), arr.end(), target);
  cout << found << endl; // if found -> 1, else 0

  auto it = lower_bound(arr.begin(), arr.end(), 35); // if target found then return its it or not then return it of just bigger value than it -> greater than or equal
  cout << *it << endl;

  auto it2 = upper_bound(arr.begin(), arr.end(), 40); // here always greater element than target
  cout << *it2 << endl;

  // ------------------------------------------------------

  vector<int> arr2;
  arr2.push_back(10);
  arr2.push_back(10);
  arr2.push_back(20);
  arr2.push_back(40);
  arr2.push_back(40);

  auto pairOfIterators = equal_range(arr2.begin(), arr2.end(), 40); // returns a pair of iterators like start and end of range in which a target element can be inserted easily without modifying the or reordering to make it sorted. -> it works on sorted range/container

  cout << *pairOfIterators.first << " " << *pairOfIterators.second << endl;

  return 0;
}