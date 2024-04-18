#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(string s)
{
  int len = s.length();
  int base = 1;
  int ans = 0;
  for (int i = len - 1; i >= 0; i--)
  {
    if (s[i] == '1')
    {
      ans = ans + base;
    }
    base = base * 2;
  }
  return ans;
}

int main()
{
  string num;
  cout << "Enter the binary number: ";
  cin >> num;
  int temp = binaryToDecimal(num);
  cout << temp << endl;

  return 0;
}