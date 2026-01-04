#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
  unordered_set<int> ust; // based on hash-table and array underlying ds -> all operation in this unordered set is O(1)

  ust.insert(10);
  ust.insert(30);
  ust.insert(20);

  ust.insert(30);
  ust.insert(10);

  cout << ust.size() << endl;

  cout << *(ust.find(30)) << endl; // if found then get starting address of it -> derefrence it to access value

  if (ust.find(32) != ust.end())
  {
    cout << "Found in Set" << endl;
  }
  else
  {
    cout << "Not Found in Set" << endl;
  }

  cout << ust.count(30) << endl; // if found then return 1, if not then 0 as it not contains duplicates value

  if (ust.count(32) == 1)
  {
    cout << "Found in Set" << endl;
  }
  else
  {
    cout << "Not Found in Set" << endl;
  }

  unordered_set<int>::iterator it = ust.begin();
  while (it != ust.end())
  {
    cout << *it << " ";
    it++;
  }
  cout << endl;

  // ust.clear();
  ust.erase(ust.begin(), ust.end());
  cout << ust.size() << endl;

  if (ust.empty())
  {
    cout << "Set is Empty" << endl;
  }
  else
  {
    cout << "Set is not Empty" << endl;
  }

  return 0;
}