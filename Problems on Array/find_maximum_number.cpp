#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n){
  sort(arr,arr+n);
  return arr[n-1];
}
int main(){
  int arr[]={5,8,6,9,2,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<getMax(arr,n)<<endl;

return 0;
}