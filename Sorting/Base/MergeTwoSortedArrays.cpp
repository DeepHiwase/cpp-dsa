#include <iostream>
#include <vector>

using namespace std;

void printElements(vector<int> arr)
{
  for (int i = 0; i < arr.size(); ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return;
}

void mergeTwoSortedArrays(int arr1[], int size1, int arr2[], int size2, vector<int> &ans)
{
  // step 1: ptr i & j init
  int i = 0;
  int j = 0;

  // step 2: compare and insert
  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
      ans.push_back(arr1[i]);
      ++i;
    }
    else
    {
      ans.push_back(arr2[j]);
      ++j;
    }
  }

  // step 3: copy remaining elements of any array if any
  while (i < size1)
  {
    ans.push_back(arr1[i]);
    ++i;
  }
  while (j < size2)
  {
    ans.push_back(arr2[j]);
    ++j;
  }

  return;
}

int main()
{
  int arr1[] = {10, 20, 30, 40};
  int size1 = 4;
  int arr2[] = {15, 25};
  int size2 = 2;

  vector<int> ans;

  mergeTwoSortedArrays(arr1, size1, arr2, size2, ans);

  cout << "Printing merged sorted array elements: ";
  printElements(ans);

  return 0;
}