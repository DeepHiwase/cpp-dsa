#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // creation
  priority_queue<int> pq; // default -> max-heap generate -> maximum value -> highest priority

  // insertion
  pq.push(10);
  pq.push(20);
  pq.push(300);
  pq.push(30);

  cout << pq.top() << endl; // top -> highest priority element

  pq.pop(); // highest priority element pop

  cout << pq.top() << endl;

  cout << pq.size() << endl;

  if (pq.empty())
  {
    cout << "Priority Queue is Empty" << endl;
  }
  else
  {
    cout << "Priority Queue is not Empty" << endl;
  }

  priority_queue<int> pq1;
  priority_queue<int> pq2;

  pq1.push(10);
  pq1.push(20);
  pq1.push(30);

  pq2.push(100);
  pq2.push(200);
  pq2.push(300);

  pq1.swap(pq2);

  cout << pq1.top() << endl;
  cout << pq2.top() << endl;

  return 0;
}