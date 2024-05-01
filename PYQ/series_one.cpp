#include <bits/stdc++.h>
using namespace std;
int eightSeries(int n){
  if(n==1){
    return 8;
  }
  int temp=eightSeries(n-1)+3;
  return temp;
}
int main(){
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;
  if(n%2==0){
    int ans=eightSeries(n/2);
    cout<<ans;
  }else{
    n=((n/2)+1);
    n=(n*3);
    cout<<n;
  }
return 0;
}