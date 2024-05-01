// #include <bits/stdc++.h>
// using namespace std;
// int leftToRightSum(int* m,int* n,int arr[m][n]){
//   int sum=0;
//   int i=0;
//   int j=0;
//   while(i!=m && j!=n){
//     sum+=arr[i][j];
//     i++;
//     j++;
//   }
//   return sum;
// }

// int rightToLeftSum(int* m,int* n,int arr[m][n]){
//   int sum=0;
//   int i=0;
//   int j=n-1;
//   while(i!=m && j>=0){
//     sum+=arr[i][j];
//     i++;
//     j--;
//   }
//   return sum;
// }

// void print(int arr[m][n])
// {
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }
// int main()
// {
//   int row, col;
//   cout << "Enter the value of row: " << endl;
//   cin >> row;
//   cout << "Enter the value of col: " << endl;
//   cin >> col;

//   int arr[row][col];
//   for (int i = 0; i < row; i++)
//   {
//     for (int j = 0; j < col; j++)
//     {
//       cin >> arr[i][j];
//     }
//   }
//   print(arr,row,col);
  // int sum1=leftToRightSum(row,col,arr);
  // int sum2=rightToLeftSum(row,col,arr);
  // cout<<(sum2-sum1)<<endl;

//   return 0;
// }

