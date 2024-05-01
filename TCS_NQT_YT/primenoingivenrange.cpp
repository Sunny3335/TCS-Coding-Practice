#include <bits/stdc++.h>
using namespace std;
bool primenum(int n){
  if(n<2){
    return false;
  }
  for(int i=2; i<n; i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int main(){
  int n,m;
  cin>>n>>m;
  for(int i=n; i<=m; i++){
    if(primenum(i)){
      cout<<i<<" ";
    }
  }
return 0;
}