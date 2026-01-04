#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  // creation
  unordered_map<string, string> ump; // hash table -> based on hash table ds with array ds

  // insertion
  ump["in"] = "India";

  ump.insert(make_pair("en", "England"));

  pair<string, string> p;
  p.first = "br";
  p.second = "Brazil";
  ump.insert(p);

  cout << ump["in"] << endl;
  cout << ump.at("in") << endl;
  ump.at("in") = "Indonesia";
  cout << ump.at("in") << endl;
  ump["in"] = "India";
  cout << ump.at("in") << endl;

  cout << ump.size() << endl;

  unordered_map<string, string>::iterator it = ump.begin();
  while (it != ump.end())
  {
    pair<string, string> p = *it;
    cout << p.first << " -> " << p.second << endl;
    it++;
  }
  cout << endl;

  if (ump.find("im") != ump.end())
  {
    cout << "Key Found" << endl;
  }
  else
  {
    cout << "Key not Found" << endl;
  }

  if (ump.count("in") == 0)
  {
    cout << "Key not Found" << endl;
  }
  else
  {
    cout << "Key Found" << endl;
  }

  // ump.clear();

  ump.erase(ump.begin(), ump.end());

  cout << ump.size() << endl;

  if (ump.empty())
  {
    cout << "Unorder Map is Empty" << endl;
  }
  else
  {
    cout << "Unorder Map is not Empty" << endl;
  }

  return 0;
}

// T.C. of each operation here in unordered_map => O(1)