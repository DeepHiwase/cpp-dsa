#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int num)
{
  cout << 2 * num << " ";
}

bool checkEven(int num)
{
  return num % 2 == 0;
}

int main()
{
  vector<int> arr(5);
  arr[0] = 5;
  arr[1] = 20;
  arr[2] = 300;
  arr[3] = 4;
  arr[4] = 550;

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  sort(arr.begin(), arr.end());

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  reverse(arr.begin(), arr.end());

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  // rotate(arr.begin(), arr.begin() + 3, arr.end());
  // rotate(arr.begin(), arr.begin() - 3, arr.end()); // ❌
  // rotate(arr.begin(), arr.end() - 3, arr.end()); // ❌could be right for left rotate
  rotate(arr.rbegin(), arr.rbegin() + 3, arr.rend()); // ✅ rbegin to start from right, rotate from right -> left

  for (int num : arr)
  {
    cout << num << " ";
  }
  cout << endl;

  // for_each(arr.begin(), arr.end(), printDouble);
  // cout << endl;

  // int target = 40;
  int target = 400;
  // vector<int>::iterator it = find(arr.begin(), arr.end(), target); // returns an iterator
  auto it = find(arr.begin(), arr.end(), target); // returns an iterator, if found then iterator, else returns 0
  cout << *it << endl;

  // vector<int>::iterator it = find_if(arr.begin(), arr.end(), checkEven); // give first element which satisfy condition
  auto it2 = find_if(arr.begin(), arr.end(), checkEven); // give first element which satisfy condition
  cout << *it2 << endl;

  int target2 = 5;
  int totalCount = count(arr.begin(), arr.end(), target2);
  cout << totalCount << endl;

  int totalEven = count_if(arr.begin(), arr.end(), checkEven);
  cout << totalEven << endl;

  // ---------------------------------------------------------------

  vector<int> arr2(6);
  arr2[0] = 11;
  arr2[1] = 11;
  arr2[2] = 11;
  arr2[3] = 22;
  arr2[4] = 22;
  arr2[5] = 33;

  auto it3 = unique(arr2.begin(), arr2.end()); // only on sorted array
  // it iterator se pahile sare elements unique hai
  // it ke baad saare duplicate elements hai

  for (int num : arr2)
  {
    cout << num << " ";
  }
  cout << endl;

  arr2.erase(it3, arr2.end());

  for (int num : arr2)
  {
    cout << num << " ";
  }
  cout << endl;

  // ---------------------------------------------------------------

  vector<int> arr3(6);
  arr3[0] = 10;
  arr3[1] = 11;
  arr3[2] = 12;
  arr3[3] = 13;
  arr3[4] = 14;
  arr3[5] = 15;

  // i want to particiate -> like example by odd number and even number
  auto it4 = partition(arr3.begin(), arr3.end(), checkEven);

  for (int num : arr3)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}