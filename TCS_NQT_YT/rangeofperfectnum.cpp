#include <bits/stdc++.h>
using namespace std;
bool checkperfect(int n){
  int temp=n;
  int ans=0;
  for(int i=1;i<n;i++){
    if(n%i==0){
      ans+=i;
    }
  }
  if(temp==ans){
    return true;
  }else{
    return false;
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  for(int i=n;i<=m;i++){
    if(checkperfect(i)){
      cout<<i<<" ";
    }
  }

return 0;
}