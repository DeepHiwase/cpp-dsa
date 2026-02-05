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

void quickSort(int arr[], int size)
{

  return;
}

int main()
{
  int arr[] = {44, 33, 55, 22, 11};
  int size = 5;

  cout << "Before Quick sort: ";
  printElements(arr, size);

  quickSort(arr, size);

  cout << "After Quick sort: ";
  printElements(arr, size);

  return 0;
}