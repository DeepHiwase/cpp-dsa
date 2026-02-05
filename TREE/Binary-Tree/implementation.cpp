#include <iostream>
#include <queue>
using namespace std;

class TreeNode
{
public:
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val)
  {
    this->data = val;
    this->left = NULL;
    this->right = NULL;
  }
};

// return root node of the tree
TreeNode *buildBinaryTree()
{
  int val;
  cin >> val;

  // base case
  if (val == -1)
  {
    return NULL;
  }
  else
  {
    // rr + processing
    TreeNode *root = new TreeNode(val);

    // rr
    root->left = buildBinaryTree();
    root->right = buildBinaryTree();

    // return root
    return root;
  }
}

// NLR - PreOrder Traversal
void preOrderTraversal(TreeNode *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }

  // processing + rr
  // NLR
  // N
  cout << root->data << " ";
  //  L
  preOrderTraversal(root->left);
  // R
  preOrderTraversal(root->right);

  return;
}

// LNR - InOrder Traversal
void inOrderTraversal(TreeNode *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }

  // processing + rr
  // LNR
  // L
  inOrderTraversal(root->left);
  // N
  cout << root->data << " ";
  // R
  inOrderTraversal(root->right);

  return;
}

// LRN - PostOrder Traversal
void postOrderTraversal(TreeNode *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }

  // processing + rr
  // LRN
  // L
  postOrderTraversal(root->left);
  // R
  postOrderTraversal(root->right);
  // N
  cout << root->data << " ";

  return;
}

// void levelOrderTraversal(TreeNode *root)
// {
//   // base case - empty tree - root == NULL
//   if (root == NULL)
//   {
//     return;
//   }

//   // level order traversal - use queue
//   queue<TreeNode *> q;
//   // maintain initial state by pushing root node
//   q.push(root);

//   while (!q.empty())
//   {
//     TreeNode *front = q.front();
//     q.pop();

//     // print pop and insert children of pop parent node
//     cout << front->data << " ";

//     if (front->left != NULL)
//     {
//       q.push(front->left);
//     }
//     if (front->right != NULL)
//     {
//       q.push(front->right);
//     }
//   }
// }

void levelOrderTraversal(TreeNode *root)
{
  // base case - empty tree - root == NULL
  if (root == NULL)
  {
    return;
  }

  // level order traversal - use queue
  queue<TreeNode *> q;
  // maintain initial state by pushing root node
  q.push(root);
  // put marker - that level 0 is complete
  q.push(NULL);

  while (!q.empty())
  {
    TreeNode *front = q.front();
    q.pop();

    if (front == NULL)
    {
      // means all node of curr level are printed -> go to next line
      cout << endl;
      // all nodes of second level are in queue -> put marker - show level complete
      // CAUTION 💀 - prevent Infinite loop ➰ -> if q not empty -> then only push NULL
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      // print pop and insert children of pop parent node
      cout << front->data << " ";

      if (front->left != NULL)
      {
        q.push(front->left);
      }
      if (front->right != NULL)
      {
        q.push(front->right);
      }
    }
  }
}

int main()
{
  // i/p -> 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
  TreeNode *root = buildBinaryTree();

  cout << "Printing PreOrder Traversal:" << endl;
  preOrderTraversal(root);
  cout << endl;

  cout << "Printing InOrder Traversal:" << endl;
  inOrderTraversal(root);
  cout << endl;

  cout << "Printing PostOrder Traversal:" << endl;
  postOrderTraversal(root);
  cout << endl;

  cout << "Printing Level Order Traversal:" << endl;
  levelOrderTraversal(root);
  // cout << endl;

  return 0;
}