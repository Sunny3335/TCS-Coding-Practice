#include <bits/stdc++.h>
using namespace std;
bool isMorphic(int num)
{
  int square = num * num;
  while (num)
  {
    if (num % 10 != square % 10)
    {
      return false; // in case of not automorphism
    }
    num /= 10;
    square /= 10;
  }
  return true;
}
int main()
{
  int num;
  cout << "Enter the number: "<< num << endl;
  cin >> num;

  if (isMorphic(num))
  {
    cout << "it is automorphism" << endl;
  }
  else
  {
    cout << "it is not automorphism" << endl;
  }

  return 0;
}