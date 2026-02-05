#include <iostream>
#include <vector>
#include <unordered_map>
#include <forward_list>
using namespace std;

int main()
{
  vector<int> arr;
  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);

  // traversal
  vector<int>::iterator it;

  for (it = arr.begin(); it < arr.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // ------------------------------------
  //   unordered_map<string, int> mp;
  //   mp.insert(make_pair("in", 1));
  //   mp.insert(make_pair("in", 2));
  //   mp.insert(make_pair("bg", 0));

  //   // now here in iterator, its not a primitive datatype, so access value *it will not work, so here its pair so => (*it).first, (*it).second, // or you can do like -> it->first , it->second => to not use * -> `->`

  //   // unordered_map<string, int>::iterator it = mp.begin();
  //   auto it = mp.begin();
  //   while (it != mp.end()) {
  //     cout << it->first << " -> " << it->second << endl;
  //     it++;
  // }

  // unordered_map<string, int> mp;
  // mp.insert(make_pair("in", 1));
  // mp.insert(make_pair("in", 2));
  // mp.insert(make_pair("bg", 0));

  // auto it = mp.begin();
  // while (it != mp.end())
  // {
  //   cout << it->first << " -> " << it->second << endl;
  //   it++;
  // }

  forward_list<int> flist;
  flist.push_front(10);
  flist.push_front(20);
  flist.push_front(30);

  // traverse
  forward_list<int>::iterator it = flist.begin();
  while (it != flist.end())
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}