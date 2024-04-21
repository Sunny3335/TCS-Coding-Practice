#include <bits/stdc++.h>
using namespace std;
int digitProduct(int num){
  int ans=1;
  while(num){
    int digit=num%10;
    ans*=digit;
    num=num/10;
  }
  return ans;
}
int main(){
  int value;
  cout<<"Enter the value of Digit: "<<endl;
  cin>>value;
  int finalAnswer=digitProduct(value);
  cout<<finalAnswer<<endl;

return 0;
}