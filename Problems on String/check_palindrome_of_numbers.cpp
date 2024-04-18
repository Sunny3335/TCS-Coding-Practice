#include <bits/stdc++.h>
using namespace std;
int reverseDigit(int x)
{
  int y = 0;
  while (x > 0)
  {
    int digit = x % 10;
    y = y * 10 + digit;
    x = x / 10;
  }
  return y;
}
int main()
{
  int x;
  cout << "Enter the value of x: " << endl;
  cin >> x;
  int temp = reverseDigit(x);
  if (x == temp)
  {
    cout << "this is palindrome" << endl;
  }
  else
  {
    cout << "this is not a palindrome" << endl;
  }

  return 0;
}