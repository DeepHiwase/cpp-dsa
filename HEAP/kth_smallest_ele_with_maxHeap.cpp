#include <iostream>
#include <queue>
using namespace std;

int getKthSmallestElement(int arr[], int n, int k)
{
  priority_queue<int> pq;
  // process first k element
  for (int i = 0; i < k; i++)
  {
    int element = arr[i];
    pq.push(element);
  }

  // remaining element ko tabhi insert karenge jab wo root se small hota hai
  for (int i = k; i < n; i++)
  {
    int element = arr[i];
    if (element < pq.top())
    {
      pq.pop();
      pq.push(element);
    }
  }

  int ans = pq.top();
  return ans;
}

int getKthGreatestElement(int arr[], int n, int k) {
  priority_queue<int, vector<int>, greater<int>> mpq;
  // process first k element
  for (int i = 0; i < k; i++)
  {
    int element = arr[i];
    mpq.push(element);
  }

  // remaining element ko tabhi insert karenge jab wo root se bade hota hai
  for (int i = k; i < n; i++)
  {
    int element = arr[i];
    if (element > mpq.top())
    {
      mpq.pop();
      mpq.push(element);
    }
  }

  int ans = mpq.top();
  return ans;
}

int main()
{
  int arr[] = {3, 5, 4, 6, 9, 8, 7}; // [3, 4, 5, 6, 7, 8, 9]
  int n = 7;
  int k = 4;
  cout << k <<"th smallest number is: " << getKthSmallestElement(arr, n, k) << endl;
  cout << k <<"th greatest number is: " << getKthGreatestElement(arr, n, k) << endl;


  return 0;
}