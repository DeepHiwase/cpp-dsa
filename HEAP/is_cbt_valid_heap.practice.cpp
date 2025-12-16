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
    this->left = left;
    this->right = right;
  }
};

class Info {
  public:
  int maxVlaue;
  bool isHeap;

  Info(int maxValue, bool isHeap) {
    this->maxVlaue = maxValue;
    this->isHeap = isHeap;
  }
};

Info checkMaxHeap(Node* root) {
  // base condition
  if (root == NULL) {
    Info temp(INT_MIN, true);
    return temp;
  }
  if (root->left == NULL && root->right == NULL) {
    Info temp(root->val, true);
    return temp;
  }

  Info leftAns = checkMaxHeap(root->left);
  Info rightAns = checkMaxHeap(root->right);
  if (root->val > leftAns.maxVlaue && root->val > rightAns.maxVlaue && leftAns.isHeap && rightAns.isHeap) {
    Info ans(root->val, true);
    return ans;
  } else {
    Info ans(max(root->val, max(leftAns.maxVlaue, rightAns.maxVlaue)), false);
    return ans;
  }
}

int main()
{

  return 0;
}