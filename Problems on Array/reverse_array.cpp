#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<", ";
  }
}

void reverseArray(int arr[], int start, int end){
  if(start<end){
  swap(arr[start], arr[end]);
  reverseArray(arr, start+1, end-1);
  }
}

int main(){

  int arr[]={4,55,32,13,47,3};
  int n=sizeof(arr)/sizeof(arr[0]);

  reverseArray(arr,0,n-1);
  print(arr,n);

return 0;
}