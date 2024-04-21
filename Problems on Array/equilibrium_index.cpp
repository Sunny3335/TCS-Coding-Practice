#include <bits/stdc++.h>
using namespace std;
// int equilibrium(int arr[],int n){
//   int leftSum,rightSum;
//   for(int i=0;i<n;i++){
//     leftSum=0;
//     for(int k=0;k<i;k++){
//       leftSum+=arr[k];
//     }
//     rightSum=0;
//     for(int k=i+1;k<n;k++){
//       rightSum+=arr[k];
//     }
//     if(leftSum==rightSum){
//       return i;
//     }
//   }
//   return -1;
// }

int equilibrium(int arr[],int n){
  int totalSum=0;
  for(int i=0;i<n;i++){
    totalSum+=arr[i];
  }
  int leftSum=0;
  int rightSum=totalSum;
  for(int i=0;i<n;i++){
    rightSum-=arr[i];
    if(leftSum==rightSum){
      return i;
    }
    leftSum+=arr[i];
  }
  return -1;
}
int main(){
  int arr[] = { 2, 3, -1, 8, 4 };
  int n=sizeof(arr)/sizeof(arr[0]);
  int equilibriumIndex=equilibrium(arr,n);
  cout<<equilibriumIndex<<endl;
return 0;
}