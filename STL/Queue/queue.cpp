#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // // creation
  // queue<int> q;

  // // inserion
  // q.push(10);
  // q.push(20);
  // q.push(30);
  // q.push(40);

  // cout << q.size() << endl;

  // q.pop();

  // cout << q.size() << endl;

  // if (q.empty())
  // {
  //   cout << "Queue is Empty" << endl;
  // }
  // else
  // {
  //   cout << "Queue is not empty" << endl;
  // }

  // cout << q.front() << endl;
  // cout << q.back() << endl;

  queue<int> q1;
  queue<int> q2;

  q1.push(10);
  q1.push(20);
  q1.push(30);

  q2.push(100);
  q2.push(200);
  q2.push(300);

  q1.swap(q2);

  cout << q1.front() << endl;
  cout << q1.back() << endl;
  cout << q2.front() << endl;
  cout << q2.back() << endl;

  return 0;
}