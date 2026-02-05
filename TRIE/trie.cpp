#include <iostream>
using namespace std;

class TrieNode
{
public:
  char value;
  TrieNode *children[26];
  bool isTerminal;

  TrieNode(char val)
  {
    this->value = val;
    for (int i = 0; i < 26; i++)
    {
      children[i] = NULL;
    }
    this->isTerminal = false;
  }
};

void insertWord(TrieNode* root, string word) {
  // base case
  if (word.length() == 0) {
    root->isTerminal = true;
    return;
  }

  
}

int main()
{
  TrieNode* root = new TrieNode('-');

  insertWord(root, "lovebabber");

  return 0;
}