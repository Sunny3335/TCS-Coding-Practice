#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int>arr){
  int n=arr.size();
  sort(arr.begin(),arr.end());
  return arr[0];
}

int findMinimum(int *arr,int n){
  sort(arr,arr+n);
  return arr[0];
}

int main(){
  vector<int>arr={5,26,9,88,41,2};
  cout<<findMin(arr)<<endl;
  int array[] = {26, 9, 88};
  int size=sizeof(array)/sizeof(array[0]);
  int ans=findMinimum(array,size);
  cout<<ans<<endl;

return 0;
}