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

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    for (int j = 0; j < size - i - 1; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  return;
}

int main()
{
  // int arr[5] = {5, 4, 3, 2, 1};
  int arr[5] = {44, 33, 55, 22, 11};
  int size = 5;

  cout << "Before Bubble sort: ";
  printElements(arr, size);

  bubbleSort(arr, size);

  cout << "After Bubble sort: ";
  printElements(arr, size);

  return 0;
}