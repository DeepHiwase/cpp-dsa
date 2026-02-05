#include <iostream>

using namespace std;

void printElements(int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return;
}

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    // find min element index
    int minIndex = i; // consider ith element is smallest
    for (int j = i + 1; j < size; ++j)
    {
      if (arr[j] < arr[minIndex]) // for decreasing => >
      {
        minIndex = j;
      }
    }

    // swap ith and minIndex-th
    swap(arr[i], arr[minIndex]);
  }

  return;
}

int main()
{
  int arr[5] = {44, 33, 55, 22, 11};
  int size = 5;

  cout << "Before Selection sort: ";
  printElements(arr, size);

  selectionSort(arr, size);

  cout << "Before Selection sort: ";
  printElements(arr, size);

  return 0;
}