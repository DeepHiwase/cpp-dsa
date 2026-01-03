#include <iostream>
#include <stack>
using namespace std;

int main()
{
  // // creation
  // stack<int> st;
  // // insertion
  // st.push(10);
  // st.push(20);
  // st.push(30);

  // cout << st.size() << endl;

  // st.pop();

  // cout << st.size() << endl;

  // if (st.empty())
  // {
  //   cout << "Stack is Empty" << endl;
  // }
  // else
  // {
  //   cout << "Stack is not Empty" << endl;
  // }

  // cout << st.top() << endl;

  stack<int> st1;
  stack<int> st2;

  st1.push(10);
  st1.push(20);
  st1.push(30);

  st2.push(100);
  st2.push(200);
  st2.push(300);

  cout << st1.top() << endl;
  cout << st2.top() << endl;

  return 0;
}