#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
  if (x == 1)
  {
    return true;
  }
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int n;
  cout << "enter the value of n: " << n << endl;
  cin >> n;
  if (isPrime(n))
  {
    cout << "this number is prime " << endl;
  }
  else
  {
    cout << "this is not the prime number " << endl;
  }
  return 0;
}