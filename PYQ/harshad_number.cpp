#include <bits/stdc++.h>
using namespace std;
int digitSum(int num){
  int sum = 0;
  while(num){
    int digit=num%10;
    sum+=digit;
    num/=10;
  }
  return sum;
}
int main(){
  int num;
  cout<<"Enter the number: "<<endl;
  cin>>num;
  int n=digitSum(num);
  if(num%n==0){
    cout<<"the given number is harshad"<<endl;
  }else{
    cout<<"the given number is not harshad"<<endl;
  }


return 0;
}