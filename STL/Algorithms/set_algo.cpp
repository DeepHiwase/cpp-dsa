// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> first;
  first.push_back(1);
  first.push_back(2);
  first.push_back(3);
  first.push_back(4);

  vector<int> second;
  second.push_back(3);
  second.push_back(4);
  second.push_back(5);
  second.push_back(6);

  vector<int> result;

  // all set ops are work on sorted range only

  // set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); // where to insert answer -> inserter function // works set_union on sorted ranges only

  // for (int num : result)
  // {
  //   cout << num << " ";
  // }
  // cout << endl;

  // set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

  // for (int num : result)
  // {
  //   cout << num << " ";
  // }
  // cout << endl;

  // set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); // difference between set 1 and set 2 with set 1 so not 5, 6 included inanswer // IMP

  // for (int num : result)
  // {
  //   cout << num << " ";
  // }
  // cout << endl;

  set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin())); // so here both 5 6 are include with 1 2 -> 1, 2, 5, 6

  for (int num : result)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}