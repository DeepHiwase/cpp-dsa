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

void insertionSort(int arr[], int size)
{

  // edge case
  if (size == 1)
    return; // already sorted

  // start with index 1 ➡️, consider before it all sorted
  for (int i = 1; i < size; ++i)
  {
    // key to compare in left sorted arr
    int key = arr[i];

    // look in left sorted part ⬅️
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key; // pos where key to insert to make left part sorted
  }

  return;
}

int main()
{
  int arr[5] = {5, 4, 3, 2, 1};
  // int arr[5] = {44, 33, 55, 22, 11};
  int size = 5;

  cout << "Before Insertion Sort: ";
  printElements(arr, size);

  insertionSort(arr, size);

  cout << "After Insertion Sort: ";
  printElements(arr, size);

  return 0;
}