#include <iostream>
using namespace std;

class Heap
{
public:
  int *arr;
  int size;
  int capacity;

  Heap(int capacity)
  {
    this->arr = new int[capacity];
    this->capacity = capacity;
    this->size = 0;
  }

  void insertIntoHeap(int val)
  {
    if (size == capacity)
    {
      cout << "Heap Overflow" << endl;
      return;
    }
    size++;
    int index = size;
    arr[index] = val;

    // heapification
    while (index > 1)
    {
      int parentIndex = index / 2;
      if (arr[parentIndex] < arr[index]) // here mistake
      {
        swap(arr[parentIndex], arr[index]);
        index = parentIndex;
      }
      else
      {
        break;
      }
    }

    return;
  }

  int deleteFromHeap()
  {
    int answer = arr[1];
    arr[1] = arr[size];
    size--;

    int index = 1;
    while (index < size)
    {
      int leftIndex = 2 * index;
      int rightIndex = 2 * index + 1;

      int largestKaIndex = index;
      if (leftIndex <= size && arr[largestKaIndex] < arr[leftIndex])
      {
        largestKaIndex = leftIndex;
      }
      if (rightIndex <= size && arr[largestKaIndex] < arr[rightIndex])
      {
        largestKaIndex = rightIndex;
      }

      // no change
      if (largestKaIndex == index)
      {
        break;
      }
      else
      {
        swap(arr[largestKaIndex], arr[index]);
        index = largestKaIndex;
      }
    }
    return answer;
  }

  void printHeap()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    return;
  }
};

void heapify(int *arr, int n, int index)
{
  int leftIndex = 2 * index;
  int rightIndex = 2 * index + 1;
  int largestKaIndex = index;

  // max from three
  if (leftIndex <= n && arr[largestKaIndex] < arr[leftIndex])
  {
    largestKaIndex = leftIndex;
  }
  if (rightIndex <= n && arr[largestKaIndex] < arr[rightIndex])
  {
    largestKaIndex = rightIndex;
  }
  // after this two condi, largestKaIndex will be pointing towards largest element among 3

  if (index != largestKaIndex)
  {
    // processing
    swap(arr[index], arr[largestKaIndex]);
    // ad recursion smabhal lenga
    index = largestKaIndex;
    heapify(arr, n, index);
  }
}

void buildHeap(int arr[], int n)
{
  for (int index = n / 2; index > 0; index--)
  {
    heapify(arr, n, index);
  }
}

void heapSort(int arr[], int n)
{
  while (n != 1)
  {
    swap(arr[1], arr[n]); // yaha mistake hoti hai, n not n -1 since 1 based indexing
    n--;                  // show size is 1 less to not affect last element
    heapify(arr, n, 1);
  }
}

int main()
{
  // Heap h(10);

  // h.insertIntoHeap(100);
  // h.insertIntoHeap(50);
  // h.insertIntoHeap(60);
  // h.insertIntoHeap(40);
  // h.insertIntoHeap(30);
  // h.insertIntoHeap(20);

  // h.printHeap();

  // int answer = h.deleteFromHeap();
  // cout << "Delete from heap: " << answer << endl;
  // h.printHeap();


  int arr[] = {-1, 5, 10, 15, 20, 25, 12}; // gallti, actual element 1 index se start ho rahe hai, put -1 at 0th index
  int n = 6;
  buildHeap(arr, 6);
  cout << "Printing Heap: " << endl;
  for (int i = 1; i <= 6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  heapSort(arr, n);
  cout << "Printing Heap: " << endl;
  for (int i = 1; i <= 6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}