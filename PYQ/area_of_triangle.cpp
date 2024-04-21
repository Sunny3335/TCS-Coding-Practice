#include <bits/stdc++.h>
using namespace std;
int main()
{
  // float b,h;
  // cout<<"Enter the value of b and h respectively: "<<endl;
  // cin>>b>>h;

  // float ans=(b*h)/2;
  // cout<<ans<<endl;

  // area of rectangles

  float l, b;
  cout << "Enter the length and breadth of rectangles: " << endl;
  cin >> l >> b;

  float ans = l * b;
  float perimeter = 2*(l + b);
  cout << "Area of rectangle: " << ans << endl;
  cout << "perimeter of rectangle: " << perimeter << endl;

  cout<<sqrt(64)<<endl;
  cout<<perimeter*perimeter<<endl;

  return 0;
}