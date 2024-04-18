#include <bits/stdc++.h>
using namespace std;

// void getNumbers(int *arr, int n){
//   if(n==0 || n==1){
//     cout<<-1<<" "<<-1<<endl;
//   }
//   sort(arr,arr+n);
//   cout<<"smallest number: "<<arr[1]<<endl;
//   cout<<"larget number: "<<arr[n-1]<<endl;

// }

void getNumbers(int *arr, int n)
{
  if (n == 0 || n == 1)
  {
    cout << -1 << " " << -1 << endl;
  }

  int small = INT_MAX, second_small = INT_MAX;
  int large = INT_MIN, second_large = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    small = min(arr[i], small);
    large = max(arr[i], large);
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < second_small && arr[i] != small)
    {
      second_small = arr[i];
    }
    if (arr[i] > second_large && arr[i] != large)
    {
      second_large = arr[i];
    }
  }

  cout << "smallest number: " << second_small << endl;
  cout << "larget number: " << second_large << endl;
}

int main()
{
  int arr[] = {2, 33, 45, 7, 1, 34, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  getNumbers(arr, size);

  return 0;
}