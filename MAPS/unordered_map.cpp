#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  // creation
  unordered_map<string, int> mapping;

  // insertion
  pair<string, int> p = make_pair("love", 25);
  pair<string, int> q("dipansh", 24);
  pair<string, int> r;
  r.first = "rohit";
  r.second = 23;
  pair<string, int> s = {"ravi", 22};

  mapping.insert(p);
  mapping.insert(q);
  mapping.insert(r);
  mapping.insert(s);
  mapping["babbar"] = 51;

  cout << "Size of map: " << mapping.size() << endl;
  // ACCESS
  cout << mapping.at("love") << endl;
  cout << mapping["love"] << endl;
  cout << mapping["babbar"] << endl;

  // SEARCHING
  cout << mapping.count("lover") << endl; // if found then <= 1/ if not found -> 0
  cout << "Size of map: " << mapping.size() << endl;
  // best way to implement searching is by using find()
  if (mapping.find("love") != mapping.end()) // if it found means the iterator is somewhere in map, and if not then it will be present at the ned of map
  {
    cout << "Found" << endl;
  }
  else
  {
    cout << "Not found" << endl;
  }
  cout << "Size of map: " << mapping.size() << endl; // 5

  cout << mapping["kumar"] << endl;                  // if found then return value, but if not then it creates new entry with that key, if using [""] format -> kumar -> 0
  cout << "Size of map: " << mapping.size() << endl; // 6 💀

  return 0;
}