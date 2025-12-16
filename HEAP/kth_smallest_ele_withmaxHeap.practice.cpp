#include <iostream>
#include <queue>
using namespace std;

int getKthSmallestElement(int arr[], int n, int k) {
  priority_queue<int> pq;
  for (int i = 0; i < k; i++) {
    int element = arr[i];
    pq.push(element);
  }

  for (int i = k; i < n; i++) {
    int element = arr[i];
    if (element < pq.top()) {
      pq.pop();
      pq.push(element);
    }
  }

  int ans = pq.top();
  return ans;
}

int getKthGreatestElement(int arr[], int n, int k) {
  priority_queue<int, vector<int>, greater<int>> mpq;
  for (int i = 0; i < k; i++) {
    int element = arr[i];
    mpq.push(element);
  }

  for (int i = k; i < n; i++) {
    int element = arr[i];
    if (element > mpq.top()) {
      mpq.pop();
      mpq.push(element);
    }
  }

  int ans = mpq.top();
  return ans;
}

int main() {


  return 0;
}