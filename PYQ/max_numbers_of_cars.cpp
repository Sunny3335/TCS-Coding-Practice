#include <bits/stdc++.h>
using namespace std;
int main(){
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
    cout<<endl;
  }

  int maxCars=0;
  int rowNum=-1;
  for(int i=0;i<m;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
      if(arr[i][j]==1){
        cnt++;
      }
    }
    if(cnt>maxCars){
      maxCars=cnt;
      rowNum=i+1;
    }
  }

  cout<<rowNum<<endl;


return 0;
}