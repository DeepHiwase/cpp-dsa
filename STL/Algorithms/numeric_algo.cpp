#include <iostream>
#include <vector>
#include <numeric>
// #include <algorithm>
using namespace std;

int main()
{
  vector<int> arr(5);
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 50;

  // int initialSum = 0;
  int totalSum = accumulate(arr.begin(), arr.end(), 0);

  cout << totalSum << endl;

  // ------------------------------------------------
  vector<int> first(3);
  first[0] = 1;
  first[1] = 2;
  first[2] = 3;
  vector<int> second(3);
  second[0] = 3;
  second[1] = 4;
  second[2] = 5;

  // int initialSum = 0;
  int innerProduct = inner_product(first.begin(), first.end(), second.begin(), 0); // here no need to give second.end() as it only multiply till first length
  // [1, 2, 3] & [3, 4, 5] => 1*3 + 2*4 + 3*5 = 26

  cout << innerProduct << endl;

  // --------------------------------------------------
  vector<int> arr2(4);
  arr2[0] = 1;
  arr2[1] = 2;
  arr2[2] = 3;
  arr2[3] = 4;

  vector<int> result(arr2.size());

  // cout << arr2.size() << endl;

  partial_sum(arr2.begin(), arr2.end(), result.begin()); // store ans in result vector // bhul na jana -> result.begin()
  // [1, 2, 3, 4] => [1, 1+2, 1+2+3, 1+2+3+4]

  for (int num : result)
  {
    cout << num << " ";
  }
  cout << endl;

  // ----------------------------------------------------------
  vector<int> fillArr(5);

  iota(fillArr.begin(), fillArr.end(), 250); // fill fillArr with starting value 250 -> [250, 251, 252]
  for (int num : fillArr)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}