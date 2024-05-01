#include <bits/stdc++.h>
using namespace std;
int main()
{   int x,y;
    cout<<"the value of x and y: "<<endl;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;x++){
        for(int j=0;j<y;y++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    // for(int i=0;i<x;x++){
    //     for(int j=0;j<y;y++){
    //         cout<<arr[i][j];
    //     }
    // }

    return 0;
}