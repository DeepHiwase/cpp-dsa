#include <iostream>
#include <vector>

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

void merge(int arr[], int s, int e, int mid)
{
  // This is not a in-place mersort -> so we are using copies to merge
  // step 1: create copy of left and right sorted array
  int leftArrayLength = mid - s + 1;
  int rightArrayLength = e - mid;

  // dymically creating array
  int *arr1 = new int[leftArrayLength];
  int *arr2 = new int[rightArrayLength];

  int mainArrayIndex = s;
  for (int i = 0; i < leftArrayLength; ++i)
  {
    arr1[i] = arr[mainArrayIndex];
    ++mainArrayIndex;
  }
  mainArrayIndex = mid + 1;
  for (int i = 0; i < rightArrayLength; ++i)
  {
    arr2[i] = arr[mainArrayIndex];
    ++mainArrayIndex;
  }

  // step 2: merge two sorted part into original array
  int i = 0; // arr1
  int j = 0; // arr2
  mainArrayIndex = s;
  while (i < leftArrayLength && j < rightArrayLength)
  {
    if (arr1[i] < arr2[j])
    {
      arr[mainArrayIndex] = arr1[i];
      ++i;
      ++mainArrayIndex;
    }
    else
    {
      arr[mainArrayIndex] = arr2[j];
      ++j;
      ++mainArrayIndex;
    }
  }
  // copying remaining elements logic
  while (i < leftArrayLength)
  {
    arr[mainArrayIndex] = arr1[i];
    ++i;
    ++mainArrayIndex;
  }
  while (j < rightArrayLength)
  {
    arr[mainArrayIndex] = arr2[j];
    ++j;
    ++mainArrayIndex;
  }

  delete[] arr1;
  delete[] arr2;
}

void mergeSort(int arr[], int s, int e)
{
  // base case
  // if (s > e) return;
  // if (s == e) return; // when single last element -> already sorted
  if (s >= e)
    return;

  // step 1: divide the srr into two parts
  int mid = s + (e - s) / 2;
  // step 2: left part solve by recursion
  mergeSort(arr, s, mid);
  // step 3: right part solve by recursion
  mergeSort(arr, mid + 1, e);
  // step 4: sorted arrays got from recurssion -> merge them -> mergeTwoSortedArrays function
  merge(arr, s, e, mid);

  return;
}

int main()
{
  int arr[] = {7, 2, 4, 3, 1, 5};
  int size = 6;
  int start = 0;
  int end = size - 1;

  cout << "Before Merge sort: ";
  printElements(arr, size);

  mergeSort(arr, start, end);

  cout << "After Merge sort: ";
  printElements(arr, size);

  return 0;
}