#include <bits/stdc++.h>
using namespace std;
int main(){
  float a,b,c,discriminant,real,imaginary;
  cout<<"Enter the value of a b and c consequently: "<<endl;
  cin>>a>>b>>c;

  discriminant=b*b-4*a*c;

  if(discriminant>0){
    float alpha=((-b+sqrt(discriminant))/(2*a));
    float bita=((-b-sqrt(discriminant))/(2*a));
    cout<<"first root of quadratic equation: "<<alpha<<endl;
    cout<<"second root of quadratic equation: "<<bita<<endl;
  }
  else if(discriminant==0){
    float alpha=(-b/2*a);
    float bita=(-b/2*a);
    cout<<"first root of quadratic equation: "<<alpha<<endl;
    cout<<"second root of quadratic equation: "<<bita<<endl;

  }else{
    real=(-b/2*a);
    imaginary=(sqrt(-discriminant)/(2*a));
    cout<<"first root of quadratic equation: "<<real << "-" << "i" <<imaginary<<endl;
    cout<<"first root of quadratic equation: "<<real << "+" << "i" <<imaginary<<endl;
  }

return 0;
}