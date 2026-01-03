#include <iostream>
#include <list>
using namespace std;

int main()
{
  // creation
  list<int> ll;

  // insertion
  ll.push_back(10);
  ll.push_back(20);
  ll.push_back(30);
  ll.push_back(40);
  cout << ll.size() << endl;

  ll.insert(ll.begin(), 100);

  ll.erase(ll.begin(), ll.end());

  // ll.push_back(10);
  // ll.remove(10);

  list<int>::iterator it = ll.begin();
  while (it != ll.end())
  {
    cout << *it << "->";
    it++;
  }
  cout << endl;

  // cout << ll.front() << endl;
  // cout << ll.back() << endl;

  // ll.push_front(5);
  // ll.push_front(2);
  // cout << ll.size() << endl;

  // ll.pop_back();
  // cout << ll.size() << endl;

  // ll.pop_front();

  // cout << ll.size() << endl;

  // ll.clear();
  // cout << ll.size() << endl;

  // if (ll.empty())
  // {
  //   cout << "List is Empty" << endl;
  // }
  // else
  // {
  //   cout << "List is not Empty" << endl;
  // }

  // list<int> ll1;
  // ll1.push_back(10);
  // ll1.push_back(20);
  // ll1.push_back(30);
  // list<int> ll2;
  // ll2.push_back(100);
  // ll2.push_back(200);
  // ll2.push_back(300);

  // ll1.swap(ll2);
  // list<int>::iterator it = ll1.begin();
  // while (it != ll1.end())
  // {
  //   cout << *it << "->";
  //   it++;
  // }
  // cout << endl;

  return 0;
}