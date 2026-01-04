#include <iostream>
#include <map>
using namespace std;

int main()
{
  // creation
  map<string, string> mp; // hash table -> based on self-balanced bst

  // insertion
  mp["in"] = "India";

  mp.insert(make_pair("en", "England"));

  pair<string, string> p;
  p.first = "br";
  p.second = "Brazil";
  mp.insert(p);

  cout << mp["in"] << endl;
  cout << mp.at("in") << endl;
  mp.at("in") = "Indonesia";
  cout << mp.at("in") << endl;
  mp["in"] = "India";
  cout << mp.at("in") << endl;

  cout << mp.size() << endl;

  map<string, string>::iterator it = mp.begin();
  while (it != mp.end())
  {
    pair<string, string> p = *it;
    cout << p.first << " -> " << p.second << endl;
    it++;
  }
  cout << endl;

  if (mp.find("im") != mp.end())
  {
    cout << "Key Found" << endl;
  }
  else
  {
    cout << "Key not Found" << endl;
  }

  if (mp.count("in") == 0)
  {
    cout << "Key not Found" << endl;
  }
  else
  {
    cout << "Key Found" << endl;
  }

  // mp.clear();

  mp.erase(mp.begin(), mp.end());

  cout << mp.size() << endl;

  if (mp.empty())
  {
    cout << "Map is Empty" << endl;
  }
  else
  {
    cout << "Map is not Empty" << endl;
  }

  return 0;
}

// T.C. of each operation here in map(ordered map) => O(log n)