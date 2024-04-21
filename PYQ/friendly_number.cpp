#include <bits/stdc++.h>
using namespace std;
int findDivisorSum(int num){
  int sum = 0;
  for(int i=1; i<num; i++){
    if(num%i==0){
      sum+=i;
    }
  }
  return sum;
}
int main(){
  int sum1,sum2;
  int num1,num2;
  cout<<"Enter the value of num1 and num2: "<<endl;
  cin>>num1>>num2;
  sum1=findDivisorSum(num1);
  sum2=findDivisorSum(num2);
  int n1=sum1/num1;
  int n2=sum2/num2;
  if(n1==n2){
    cout<<"friendly number"<<endl;
  }else{
    cout<<"not a friendly number"<<endl;
  }
return 0;
}