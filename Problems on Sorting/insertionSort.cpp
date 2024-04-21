#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift the array
                arr[j+1]=arr[j];
            }
            else{ // in case of temp>arr[j];
                break;
            }
        }
        arr[j+1]=temp; // since array shift krne ke bad j one index piche chla jayega
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
  insertionSort(arr,n);
  printArr(arr,n);

return 0;
}