#include <bits/stdc++.h>
using namespace std;
void checkNum(int n)
{
  if (n >= 0)
  {
    if (n == 0)
    {
      cout << "the number is zero" << endl;
    }
    else
    {
      cout << "the number is positive" << endl;
    }
  }else{
    cout << "the number is negative" << endl;
  }

}
int main()
{
  int num;
  cout << "Enter the value of num: " << endl;
  cin >> num;
  checkNum(num);

  return 0;
}