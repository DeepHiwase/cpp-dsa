#include <iostream>
#include <queue>
using namespace std;

int main()
{
  // // creation of max heap
  // priority_queue<int> pq;
  // // insertion
  // pq.push(10);
  // pq.push(20);
  // pq.push(30);
  // pq.push(40);
  // pq.push(50);
  // // access top heap element, root
  // cout << "Top element of Heap: " << pq.top() << endl;
  // pq.pop();
  // cout << "Top element of Heap: " << pq.top() << endl;
  // cout << "Size of Max Heap: " << pq.size() << endl;
  // if (pq.empty())
  // {
  //   cout << "Max heap is empty" << endl;
  // }
  // else
  // {
  //   cout << "Max heap is not empty" << endl;
  // }

  // min Heap
  // creation
  priority_queue<int, vector<int>, greater<int>> mpq;
  // insertion
  mpq.push(100);
  mpq.push(90);
  mpq.push(70);
  // root / top element access
  cout << "Top element access: " << mpq.top() << endl;
  mpq.pop();
  cout << "Top element access: " << mpq.top() << endl;
  if (mpq.empty())
  {
    cout << "Max heap is empty" << endl;
  }
  else
  {
    cout << "Max heap is not empty" << endl;
  }

  return 0;
}