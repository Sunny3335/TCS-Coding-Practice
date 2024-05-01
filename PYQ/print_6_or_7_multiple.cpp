#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  if(n%2==0){
    n=((n/2)-1);
    cout<<(n*6)<<endl;
  }else{
    cout<<((n/2)*7)<<endl;
  }

return 0;
}