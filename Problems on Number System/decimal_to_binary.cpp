#include <bits/stdc++.h>
using namespace std;
void decimalToBinary(int num)
{
  int array[32] = {0};
  int i = 0;
  while (num)
  {
    array[i] = num % 2;
    i++;
    num = num / 2;
  }
  for (int it = i - 1; it >= 0; it--)
  {
    cout << array[it];
  }
}

int main()
{
  int n;
  cout << "Enter the decimal number: " << n << endl;
  cin >> n;
  decimalToBinary(n);

  return 0;
}