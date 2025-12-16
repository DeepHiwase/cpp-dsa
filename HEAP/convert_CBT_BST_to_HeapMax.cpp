#include <iostream>
#include <vector>
#include <queue>
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

Node *insertIntoBST(Node *root, int data)
{
  if (root == NULL)
  {
    root = new Node(data);
    return root;
  }

  // if its not the first node
  if (data > root->val)
  {
    root->right = insertIntoBST(root->right, data);
  }
  else
  {
    root->left = insertIntoBST(root->left, data);
  }

  return root;
}

void createBST(Node *&root) // bhul jata hu/ galti karta hu, needs to put &
{
  cout << "Enter data: " << endl;
  int data;
  cin >> data;
  while (data != -1)
  {
    root = insertIntoBST(root, data);
    cout << "Enter data: " << endl;
    cin >> data;
  }

  return;
}

void levelOrderTraversal(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    if (temp == NULL)
    {
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->val << " ";
      if (temp->left != NULL)
      {
        q.push(temp->left);
      }
      if (temp->right != NULL)
      {
        q.push(temp->right);
      }
    }
  }
}

void storeInOrderTraversal(Node *root, vector<int> &in)
{
  if (root == NULL)
  {
    return;
  }

  // LNR
  storeInOrderTraversal(root->left, in);
  in.push_back(root->val);
  storeInOrderTraversal(root->right, in);
}

void replaceUsingPostOrder(Node *root, vector<int> in, int &index) // not to forgot passing index with reference
{ // pass index by reference -> nahi to vapas ate huye index change ho sakta hai
  // base case
  if (root == NULL)
  {
    return;
  }

  // LRN
  replaceUsingPostOrder(root->left, in, index);
  replaceUsingPostOrder(root->right, in, index);
  root->val = in[index];
  index++;
}

Node *convertCBTBSTtoHeap(Node *root)
{
  // 1. store inorder
  vector<int> inorder;
  storeInOrderTraversal(root, inorder);
  // 2. replace the sorted inorder values in tree, using Post order traversal
  int index = 0;
  replaceUsingPostOrder(root, inorder, index);

  return root;
}

int main()
{
  Node *root = NULL;
  createBST(root);

  levelOrderTraversal(root);

  cout << endl;
  cout << endl << "Converting into Heap: " << endl;
  root = convertCBTBSTtoHeap(root);
  cout << "Printng Heap: " << endl;
  levelOrderTraversal(root);

  return 0;
}