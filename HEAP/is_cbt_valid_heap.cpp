#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;

  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

// pair<int, bool>

class Info
{
public:
  int maxValue;
  bool isHeap;

  Info(int val, bool heap)
  {
    this->maxValue = val;
    this->isHeap = heap;
  }
};

Info checkMaxHeap(Node *root)
{
  // base case
  if (root == NULL)
  {
    Info temp(INT_MIN, true);
    return temp;
  }
  if (root->left == NULL && root->right == NULL)
  {
    Info temp(root->val, true);
    return temp;
  }

  // left & right check
  // using recursion
  Info leftAns = checkMaxHeap(root->left);
  Info rightAns = checkMaxHeap(root->right);
  //  1 case to solve
  if (root->val > leftAns.maxValue && root->val > rightAns.maxValue && leftAns.isHeap && rightAns.isHeap)
  {
    Info ans(root->val, true);
    return ans;
  }
  else
  {
    Info ans(max(root->val, max(leftAns.maxValue, rightAns.maxValue)), false);
    return ans;
  }
}

int main()
{
  cout << "Hello World!" << endl;

  return 0;
}