#include <iostream>
#include <unordered_map> // if use ordered map wthen iutput entries will be in orderd format a,b,e,l,o,r,v
#include <map>
using namespace std;

// void countCharacters(unordered_map<char, int> &freq_char, string str)
void countCharacters(map<char, int> &freq_char, string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    char ch = str[i];
    freq_char[ch]++;
  }
}

int main()
{
  string str = "love babbar";
  // unordered_map<char, int> freq_char;
  map<char, int> freq_char;
  countCharacters(freq_char, str);

  for (auto i : freq_char)
  {
    cout << i.first << "-> " << i.second << endl;
  }

  return 0;
}