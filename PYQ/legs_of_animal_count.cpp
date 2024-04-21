#include <bits/stdc++.h>
using namespace std;
int main(){
  int animal,legs;
  cout<<"Enter the number of animal: "<<endl;
  cin>>animal;
  cout<<"Enter the number of legs: "<<endl;
  cin>>legs;
  int x=(legs-2*animal)/2;
  int y=animal-x;
  cout<<"Total number of animals with 4 legs: "<<x<<endl;
  cout<<"Total number of animals with 2 legs: "<<y<<endl;
return 0;
}