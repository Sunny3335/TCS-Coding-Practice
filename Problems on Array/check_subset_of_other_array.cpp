// #include <bits/stdc++.h>
// using namespace std;
// bool isSubset(int arr1[], int m, int arr2[], int n){
//   if(m>n) return false;
//   for(int i=0;i<m;i++){
//     bool present = false;
//     for(int j=0;j<n;j++){
//       if(arr2[j]==arr1[i]){
//         present = true;
//         break;
//       }
//     }
//     if(present==false) return false;
//   }
//   return true;
// }
// int main(){
// 	int arr1[]={1,3,4,5,2};
// 	int arr2[]={2,4,3,1,7,15};

// 	int m= sizeof(arr1)/sizeof(arr1[0]);
// 	int n= sizeof(arr2)/sizeof(arr2[0]);
//   bool ans =isSubset(arr1,m,arr2,n);
//   if(ans){
//     cout<<"this array is subset of the arr2"<<endl;
//   }else{
//     cout<<"this array is not subset of the arr2"<<endl;
//   }
// return 0;
// }


// -------------- another method using binary search ----------

#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int ele,int arr[], int n){
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==ele){
      return true;
    }
    else if(arr[mid]>ele){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
    mid=start+(end-start)/2;
  }
  return false;
}
bool isSubset(int arr1[], int m, int arr2[], int n){
  sort(arr2,arr2+n);
  if(m>n) return false;
  for(int i=0;i<m;i++){
    bool present=binarySearch(arr1[i],arr2,n);
    if(present==false) return false;
  }
  return true;
}
int main(){
	int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,15};

	int m= sizeof(arr1)/sizeof(arr1[0]);
	int n= sizeof(arr2)/sizeof(arr2[0]);
  bool ans =isSubset(arr1,m,arr2,n);
  if(ans){
    cout<<"this array is subset of the arr2"<<endl;
  }else{
    cout<<"this array is not subset of the arr2"<<endl;
  }
return 0;
}
