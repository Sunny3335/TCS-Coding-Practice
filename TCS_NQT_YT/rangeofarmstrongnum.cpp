#include <bits/stdc++.h>
using namespace std;
bool checkArm(int n){
  int temp=n;
  int ans=0;
  while(n){
    int digit=(n%10);
    ans+=(digit*digit*digit);
    n=n/10;
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
    if(checkArm(i)){
      cout<<i<<" ";
    }
  }

return 0;
}