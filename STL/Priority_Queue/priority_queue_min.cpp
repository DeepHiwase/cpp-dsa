#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // creation
  priority_queue<int, vector<int>, greater<int>> mpq; // comparator -> min-heap generate -> minimum value -> highest priority

  // insertion
  mpq.push(10);
  mpq.push(20);
  mpq.push(300);
  mpq.push(30);

  cout << mpq.top() << endl; // top -> highest priority element

  mpq.pop(); // highest priority element pop

  cout << mpq.top() << endl;

  cout << mpq.size() << endl;

  if (mpq.empty())
  {
    cout << "Priority Queue is Empty" << endl;
  }
  else
  {
    cout << "Priority Queue is not Empty" << endl;
  }

  // priority_queue<int> pq1;
  // priority_queue<int> pq2;

  // pq1.push(10);
  // pq1.push(20);
  // pq1.push(30);

  // pq2.push(100);
  // pq2.push(200);
  // pq2.push(300);

  // pq1.swap(pq2);

  // cout << pq1.top() << endl;
  // cout << pq2.top() << endl;

  return 0;
}