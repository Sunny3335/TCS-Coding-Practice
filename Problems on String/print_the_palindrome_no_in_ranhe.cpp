#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
  int temp = n;
  int reverse = 0;
  while (n > 0)
  {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }
  if (temp == reverse)
    return true;
  else
    return false;
}
int main()
{
  int x, y;
  cout << "Enter the value of x: " << endl;
  cin >> x;
  cout << "Enter the value of y: " << endl;
  cin >> y;

  for (int i = x; i <= y; i++)
  {
    if (palindrome(i))
    {
      cout << i << " " << endl;
    }
  }

  return 0;
}