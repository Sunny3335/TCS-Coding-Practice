#include <bits/stdc++.h>
using namespace std;
int findSum(string str){
  int sum=0;
  for(auto ch: str){
    if(isdigit(ch)){
      sum+=ch-'0';
    }
  }
  return sum;
}
int findPro(string str){
  int pro=1;
  for(auto ch: str){
    if(isdigit(ch)){
      pro*=ch-'0';
    }
  }
  return pro;
}

// this is the other way to find the sum and product of the numbers;
void findS(string str){
  int sum=0;
  int pro=1;
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    ch=ch-'0';
    if(ch>=0 && ch<=9){
    sum+=(ch);
    pro*=ch;
    }

  }
  cout<<sum<<endl;
  cout<<pro<<endl;
}

int main(){
  string str;
  cout<<"Enter the any string: "<<endl;
  cin>>str;
  int ans=findSum(str);
  int ans1=findPro(str);
  cout<<"sum of digits: "<<ans<<endl;
  cout<<"product of digits: "<<ans1<<endl;
  findS(str);



return 0;
}