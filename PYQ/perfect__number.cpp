#include <bits/stdc++.h>
using namespace std;
int divisorSum(int num){
  int sum = 0;
  for(int i = 1; i < num;i++){
    if(num%i==0){
      sum+=i;
    }
  }
  return sum;
}
int main()
{
  int num;
  cout<<num<<endl;
  cout << "Enter the number: " << num << endl;
  cin >> num;
  int ans1=divisorSum(num);
  if(ans1==num){
    cout<<"perfect number"<<endl;
  }else{
    cout<<"not perfect number"<<endl;
  }

  return 0;
}