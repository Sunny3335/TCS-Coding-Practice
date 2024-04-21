#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n,int k){
  vector<int>ans;
  for(int i=k;i<n;i++){
    ans.push_back(arr[i]);
  }
  for(int i=0;i<k;i++){
    ans.push_back(arr[i]);
  }
  for(int m=0;m<n;m++){
    // copying all the elements from ans to original array
    arr[m]=ans[m];
  }
}
void print(int arr[], int n){
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3;
  rotate(arr,n,k);
  print(arr,n);

return 0;
}