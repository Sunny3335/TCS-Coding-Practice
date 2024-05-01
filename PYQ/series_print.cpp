#include <bits/stdc++.h>
using namespace std;
int odd(int n)
{
  if (n == 1)
  {
    return 0;
  }
  int oddAns = odd(n - 1) + 2;
  return oddAns;
}
int even(int n)
{
  if (n == 1)
  {
    return 0;
  }
  int evenAns = even(n - 1) + 1;
  return evenAns;
}
int main()
{
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;
  if (n % 2 == 0)
  {
    int ans = (odd(n - 1)) / 2;
    cout << ans / 2;
  }
  else
  {
    int ans = n - 1;
    cout << ans;
  }

  return 0;
}