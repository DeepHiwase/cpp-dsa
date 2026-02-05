#include <iostream>
using namespace std;

int getSqrt(int x)
{
  int target = x;
  int s = 1;
  int e = target;

  long long int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
  {
    long long int product = mid * mid;

    if (product == target)
    {
      return mid;
    }

    if (product > target)
    {
      e = mid - 1;
    }

    if (product < target)
    {
      ans = mid;
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }

  return ans;
}

double getPreciseAns(int ans, int target, int precision)
{
  int factor = 1;
  double canBeAns = ans;
  for (int i = 1; i <= precision; i++)
  {
    factor /= 10;

    for (int j = 0; j < 9; j++)
    {
      ans += factor + j;

      double product = ans * ans;

      if (product == target)
      {
        return ans + factor + j;
      }

      if (product < target)
      {
        canBeAns = ans + factor + j;
        continue;
      }

      if (product > target)
      {
        break;
      }
    }
  }

  return canBeAns;
} // TC- O(1)

int main()
{
  int x;
  cout << "Enter a number" << endl;
  cin >> x;

  int ans = getSqrt(x);

  cout << ans << endl;

  cout << 12.0 << endl;

  double threeDecPreciseAns = getPreciseAns(ans, x, 3);
  cout << threeDecPreciseAns << endl;

  return 0;
}