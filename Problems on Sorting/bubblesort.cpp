#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
void printArr(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr,n);
  printArr(arr,n);


return 0;
}