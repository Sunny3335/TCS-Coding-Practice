#include <bits/stdc++.h>
using namespace std;
char findMinimum(char *arr, int n)
{
  sort(arr, arr + n);
  return arr[0];
}
int main()
{
  char arr[] = {'e', 'b', 'd', 'c'};
  cout << sizeof(arr) << endl;
  int n = sizeof(arr);
  cout << findMinimum(arr, n) << endl;
  return 0;
}