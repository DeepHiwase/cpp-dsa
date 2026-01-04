#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> st; // based on underline self-balanced bst ds -> all operation in this ordered set is O(log n)

  st.insert(10);
  st.insert(30);
  st.insert(20);

  st.insert(30);
  st.insert(10);

  cout << st.size() << endl;

  cout << *(st.find(30)) << endl; // if found then get starting address of it -> derefrence it to access value

  if (st.find(32) != st.end())
  {
    cout << "Found in Set" << endl;
  }
  else
  {
    cout << "Not Found in Set" << endl;
  }

  cout << st.count(30) << endl; // if found then return 1, if not then 0 as it not contains duplicates value

  if (st.count(32) == 1)
  {
    cout << "Found in Set" << endl;
  }
  else
  {
    cout << "Not Found in Set" << endl;
  }

  set<int>::iterator it = st.begin();
  while (it != st.end())
  {
    cout << *it << " ";
    it++;
  }
  cout << endl;

  // st.clear();
  st.erase(st.begin(), st.end());
  cout << st.size() << endl;

  if (st.empty())
  {
    cout << "Set is Empty" << endl;
  }
  else
  {
    cout << "Set is not Empty" << endl;
  }

  return 0;
}