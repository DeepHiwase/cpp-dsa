#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int num1 = 10;
  int num2 = 15;

  cout << max(num1, num2) << endl;
  cout << min(num1, num2) << endl;

  vector<int> arr;
  arr.push_back(40);
  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(50);

  auto it = min_element(arr.begin(), arr.end());  // returns iterator of min element
  auto it2 = max_element(arr.begin(), arr.end()); // returns iterator of min element

  cout << *it << " " << *it2 << endl;

  return 0;
}