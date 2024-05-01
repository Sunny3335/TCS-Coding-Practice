#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  int D;
  cin>>D;
  int fine;
  cin>>fine;

  // calculate the fine
  int total_fine=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2==1 && (D%2==0)){
      total_fine+=fine;
    }else if(arr[i]%2==0 && (D%2==1)){
      total_fine+=fine;
    }
  }
  cout<<total_fine<<endl;

return 0;
}