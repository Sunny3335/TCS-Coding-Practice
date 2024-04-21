#include <bits/stdc++.h>
using namespace std;
int findEle(int arr[],int n,int k){
  int ans=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==k){
      ans=i;
    }
  }
  return ans;
}

int main()
{
  int arr[] = {6, 7, 9, 5, 3, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;

  int num = findEle(arr, n, k);
  cout << "Element is: " << num << endl;

  return 0;
}