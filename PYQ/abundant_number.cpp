#include <bits/stdc++.h>
using namespace std;
int main(){
  int num;
  cout<<"Enter the number: "<<endl;
  cin>>num;
  int sum=0;
  for(int i=1; i<num; i++){
    if((num%i)==0){
      sum+=i;
    }
  }
  if(sum>num){
      cout<<"abundant number"<<endl;
      cout<<sum-num<<endl;
    }else{
      cout<<"not abundant number"<<endl;
    }

return 0;
}