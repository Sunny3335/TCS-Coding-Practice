// #include <bits/stdc++.h>
// using namespace std;
// void decimalToBinary(int num)
// {
//   int array[32] = {0};
//   int i = 0;
//   while (num)
//   {
//     array[i] = num % 2;
//     i++;
//     num = num / 2;
//   }
//   for (int it = i - 1; it >= 0; it--)
//   {
//     cout << array[it];
//   }
// }

// int main()
// {
//   int n;
//   cout << "Enter the decimal number: " << endl;
//   cin >> n;
//   decimalToBinary(n);

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void decimalToBinary(int num)
{
  int flag = 0;
  for (int i = 32; i >= 0; i--)
  {
    if ((num >> i) & 1)
    {
      flag = 1;
      cout << 1;
    }
    else
    {
      if (flag == 1)
      {
        cout << 0;
      }
    }
  }
}
int main()
{
  int n;
  cout << "Enter the decimal number: " << endl;
  cin >> n;
  decimalToBinary(n);
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n = 15;
//   cout << (n >> 31) << endl;
//   cout << ((n >> 31) & 1)<< endl;
//   cout << (n >> 2) << endl;
//   cout << (n >> 3) << endl;
//   cout << (n >> 4) << endl;
//   cout << (n >> 5) << endl;
//   cout << endl;
//   cout << (n << 1) << endl;
//   cout << (n << 2) << endl;
//   cout << (n << 3) << endl;
//   cout << (n << 4) << endl;
//   cout << (n << 5) << endl;

//   return 0;
// }