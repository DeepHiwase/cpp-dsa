#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Info
{
public:
  int data;
  int rowIndex;
  int columnIndex;

  Info(int data, int rowIndex, int columnIndex)
  {
    this->data = data;
    this->rowIndex = rowIndex;
    this->columnIndex = columnIndex;
  }
};

class compare {
  public:
    bool operator()(Info* a, Info* b){
      return a->data > b->data;
    }
};

void mergeKSortedArrays(int arr[][4], int n, int k, vector<int> &ans)
{

  priority_queue<Info*, vector<Info*>, compare> mpq; // since info object are going to create dynamically so Info*
}

int main()
{
  int arr[3][4] = {
      {1, 4, 8, 10},
      {2, 3, 6, 9},
      {5, 7, 11, 12},
  };

  int n = 4;
  int k = 3;

  vector<int> ans;
  mergeKSortedArrays(arr, n, k, ans);

  cout << "Printing answer array: " << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}