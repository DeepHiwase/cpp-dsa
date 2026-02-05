#include <iostream>

using namespace std;

class ABC
{
private:
  int x;
  int *y;

public:
  ABC()
  {
    x = 0;
    y = new int(0);
  }

  int getX()
  {
    return x;
  }

  void setX(int _val)
  {
    x = _val;
  }

  int getY()
  {
    return *y;
  }

  void setY(int _val)
  {
    *y = _val;
  }
};

int main()
{
  ABC a;
  cout << a.getX() << endl;
  cout << a.getY() << endl;
  a.setX(2);
  a.setY(4);
  cout << a.getX() << endl;
  cout << a.getY() << endl;

  return 0;
}