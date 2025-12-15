#include <iostream>
using namespace std;

class Heap
{
public:
  int *arr;
  int capacity;
  int size;

  Heap(int capacity)
  {
    this->arr = new int[capacity];
    this->capacity = capacity;
    this->size = 0;
  }

  void insert(int val)
  {
    if (size == capacity)
    {
      cout << "Heap Overflow" << endl;
      return;
    }
    size++;
    int index = size;
    arr[index] = val;

    // follow heapify
    while (index > 1)
    {
      int parentIndex = index / 2;
      // here we are following max heap
      if (arr[index] > arr[parentIndex])
      {
        swap(arr[index], arr[parentIndex]);
        index = parentIndex;
      }
      else
      {
        break;
      }
    }

    return;
  }

  int deleteInHeap()
  {
    int answer = arr[1];
    // replacement
    arr[1] = arr[size];
    // last element delete kardo from original position
    size--;

    // heapification
    int index = 1;
    while (index < size)
    {
      int leftIndex = 2 * index;
      int rightIndex = 2 * index + 1;

      // to find out who is greatest -> for max heap heapification
      int largestKaIndex = index;
      // bhul jata hu -> check index is in range before accessing in array
      if (leftIndex <= size && arr[leftIndex] > arr[largestKaIndex])
      {
        largestKaIndex = leftIndex;
      }
      if (rightIndex <= size && arr[rightIndex] > arr[largestKaIndex])
      {
        largestKaIndex = rightIndex;
      }

      // no change
      if (index == largestKaIndex)
      {
        break;
      }
      else
      {
        swap(arr[index], arr[largestKaIndex]);
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
  }
};

int main()
{
  Heap h(20);

  // insertion
  h.insert(100);
  h.insert(50);
  h.insert(60);
  h.insert(40);
  h.insert(30);
  h.insert(20);

  cout << "Printing the content of Heap:" << endl;
  h.printHeap();

  int deleteAns = h.deleteInHeap();
  cout << "Delete Node from heap: " << deleteAns << endl;
  h.printHeap();

  return 0;
}