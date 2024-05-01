#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
  int temp=n;
  int y=0;
  while(n){
    int digit=n%10;
    y=(y*10)+digit;
    n/=10;
  }
  if(temp==y){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n,m;
  cin>>n>>m;
  for(int i=n;i<=m;i++){
    if(palindrome(i)){
      cout<<i<<" ";
    }
  }
return 0;
}