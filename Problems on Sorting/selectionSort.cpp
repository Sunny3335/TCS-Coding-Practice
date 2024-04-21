#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      }
    }
    int temp=arr[minIndex];
    arr[minIndex]=arr[i];
    arr[i]=temp;
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
  selectionSort(arr,n);
  printArr(arr,n);
return 0;
}