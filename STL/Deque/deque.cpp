#include <iostream>
// #include <deque>
#include <queue>
using namespace std;

int main()
{
  // // creation
  // deque<int> dq;
  // // insertion
  // dq.push_back(10);
  // dq.push_back(20);
  // dq.push_back(30);
  // dq.push_front(100);
  // dq.push_front(200);
  // dq.push_front(300);

  // cout << dq.size() << endl;

  // dq.pop_front();
  // cout << dq.size() << endl;

  // dq.pop_back();
  // cout << dq.size() << endl;

  // cout << dq.front() << endl;
  // cout << dq.back() << endl;

  // // dq.clear();

  // if (dq.empty())
  // {
  //   cout << "Deque is Empty" << endl;
  // }
  // else
  // {
  //   cout << "Deque is not Empty" << endl;
  // }

  // cout << *(dq.begin()) << endl;
  // cout << *(dq.end()) << endl;
  // cout << *(dq.end() - 1) << endl;

  // deque<int>::iterator it = dq.begin();
  // while (it != dq.end())
  // {
  //   cout << *it << " - ";
  //   it++;
  // }
  // cout << endl;

  // cout << dq[0] << endl;
  // cout << dq[1] << endl;
  // cout << dq[2] << endl;
  // cout << dq[4] << endl;
  // cout << dq[5] << endl;
  // cout << dq.at(0) << endl;
  // cout << dq.at(1) << endl;
  // cout << dq.at(3) << endl;
  // cout << dq.at(5) << endl;

  // dq.erase(dq.begin(), dq.end());

  // cout << dq.size() << endl;

  // dq.insert(dq.begin(), 50);
  // cout << dq.size() << endl;

  deque<int> dq1;
  deque<int> dq2;

  dq1.push_back(10);
  dq1.push_back(20);
  dq1.push_back(30);

  dq2.push_back(100);
  dq2.push_back(200);
  dq2.push_back(300);

  dq1.swap(dq2);

  deque<int>::iterator it = dq1.begin();
  while (it != dq1.end())
  {
    cout << *it << " - ";
    it++;
  }
  cout << endl;

  return 0;
}