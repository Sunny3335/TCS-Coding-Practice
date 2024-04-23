#include <bits/stdc++.h>
using namespace std;
int facto(int n){
  int fact=1;
  for(int i=2;i<=n;i++){
    fact*=i;
  }
  return fact;
}
int digitFactoSum(int num){
  int sum=0;
  while(num){
    int digit=num%10;
    sum+=facto(digit);
    num/=10;
  }
  return sum;
}
int main(){
  int num=145;
  int sum1=digitFactoSum(num);
  if(sum1==num){
    cout<<"strong number"<<endl;
  }else{
    cout<<"not strong number"<<endl;
  }

return 0;
}