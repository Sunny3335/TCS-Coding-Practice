#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
void print(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int lowerLimit, upperLimit;
  cout << "lowerLimit: " << endl;
  cin >> lowerLimit;
  cout << "upperLimit: " << endl;
  cin >> upperLimit;

  vector<int> arr;
  for (int i = lowerLimit; i <= upperLimit; i++)
  {
    if (isPrime(i))
    {
      arr.push_back(i);
    }
  }
  print(arr);
  return 0;
}