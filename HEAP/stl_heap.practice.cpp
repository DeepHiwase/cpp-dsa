#include <iostream>
#include <queue>
using namespace std;

int main()
{

  // priority_queue<int> pq;
  // pq.push(10);
  // pq.push(20);
  // pq.push(30);
  // pq.push(40);
  // pq.push(50);
  // cout << "Print top element: " << pq.top() << endl;
  // pq.pop();
  // cout << "Print top element: " << pq.top() << endl;

  priority_queue<int, vector<int>, greater<int>> mpq;
  mpq.push(100);
  mpq.push(90);
  mpq.push(70);

  return 0;
}