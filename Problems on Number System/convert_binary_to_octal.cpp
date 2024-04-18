#include <bits/stdc++.h>
using namespace std;
string binaryToOctal(string str)
{
  int n = str.length();
  if (n % 3 == 1)
  {
    str = "00" + str;
  }
  else if (n % 3 == 2)
  {
    str = "0" + str;
  }
  n = str.length();
  string ans = "";
  for (int i = 0; i < n; i = i + 3)
  {
    int temp = (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0') * 1;
    ans += temp + '0';
  }

  return ans;
}
int main()
{
  string num;
  cout << "Enter the binary number: ";
  cin >> num;
  cout << binaryToOctal(num) << endl;

  return 0;
}