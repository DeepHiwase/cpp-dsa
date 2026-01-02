#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // creation
  // vector<int> marks(5, -1);
  vector<int> marks;

  // cout << marks.max_size() << endl;

  // cout << marks[0] << endl; // 💀❌ error: Segmentation fault -> square braces notation only can access elements in vector
  // solution ->
  // 1. either assign size ✅🍗
  // 2. or put elements in it ✅ vector<>int  marks(10); -> marks[0] works
  //  // you can not assin values using square braces also

  // marks.push_back(10);
  // marks.push_back(20);
  // marks.push_back(30);
  // marks.push_back(40);

  // cout << marks.capacity() << endl;
  // cout << marks.size() << endl;

  // marks.clear();

  // marks.reserve(10); // apply minimum capacity

  // cout << marks.capacity() << endl;
  // cout << marks.size() << endl;

  // marks.push_back(50);
  // cout << marks.capacity() << endl;
  // cout << marks.size() << endl;

  // marks.insert(marks.begin(), 50);
  // cout << marks.capacity() << endl;
  // cout << marks.size() << endl;
  // cout << *(marks.begin()) << endl;
  // cout << marks[0] << endl;

  // marks.erase(marks.begin());
  // // marks.erase(marks.begin(), marks.end());
  // cout << marks.size() << endl;
  // cout << *(marks.begin()) << endl;
  // cout << marks[0] << endl;

  // cout << marks[0] << endl;
  // marks[0] = 100;
  // cout << marks[0] << endl;
  // cout << marks[2] << endl;

  // cout << marks.size() << endl;

  // cout << marks.front() << endl;
  // cout << marks.back() << endl;

  // // access
  // cout << *(marks.begin()) << endl;

  // marks.pop_back();
  // marks.pop_back();
  // marks.pop_back();

  // cout << marks.front() << endl;
  // cout << marks.back() << endl;

  // cout << marks.size() << endl;
  // cout << *(marks.begin()) << endl;
  // if (marks.empty())
  // {
  //   cout << "Vector is empty" << endl;
  // }
  // marks.pop_back();
  // if (marks.empty())
  // {
  //   cout << "Vector is empty" << endl;
  // }
  // cout << marks.front() << endl;
  // cout << marks.back() << endl;
  // cout << marks.size() << endl;
  // cout << *(marks.begin()) << endl;

  // vector<int> miles(10);

  // cout << miles[0] << endl; // gives 0 ✅
  // cout << miles.at(0) << endl;

  // vector<int> distances(15, 0);

  // vector<int> first;
  // vector<int> second;

  // first.push_back(10);
  // first.push_back(20);
  // first.push_back(30);
  // first.push_back(40);

  // second.push_back(100);
  // second.push_back(200);
  // second.push_back(300);
  // second.push_back(400);

  // first.swap(second);

  // cout << first[0] << " " << first[1] << " " << first[2] << " " << first[3] << " " << endl;

  // for (int i : second)
  // {
  //   cout << i << " ";
  // }
  // cout << endl;

  // // traversing vector using iterator
  // // 1. create iterator and point to location
  // vector<int>::iterator it = first.begin();
  // // 2. traverse using it
  // while (it != first.end())
  // {
  //   cout << *it << " ";
  //   it++; // bhul jate ho
  // }
  // cout << endl;

  // // 2D Vector / array
  // vector<vector<int>> vec(5, vector<int>(4, 0)); // rowCount = 5, colCount = 4, each cell value = 0
  // int totalRows = vec.size();
  // int totalCols = vec[0].size();

  // cout << totalRows << " " << totalCols << endl;

  // Jagged Array / a vector with different no. of columns
  // 1. create row vector
  vector<vector<int>> jaggedArr(4);
  // 2. insert colums vector of diff sizes
  jaggedArr[0] = vector<int>(4);
  jaggedArr[1] = vector<int>(2);
  jaggedArr[2] = vector<int>(5);
  jaggedArr[3] = vector<int>(3);

  int jaggedArrTotalRows = jaggedArr.size();
  //  apply loop for column size in each row
  int totalColInRow[jaggedArrTotalRows];
  for (int i = 0; i < jaggedArrTotalRows; i++)
  {
    int totalCols = jaggedArr[i].size();
    totalColInRow[i] = totalCols;
  }

  for (int i : totalColInRow)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}