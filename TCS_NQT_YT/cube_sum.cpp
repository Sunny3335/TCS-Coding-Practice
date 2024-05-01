#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string N;
        cin >> N;
        int n = stoi(N);
        int r;
        cin >> r;
        int sum = 0;
        while (n)
        {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
        sum = sum + (sum * (r - 1));
        int temp = 0;
        while (sum)
        {
            int digit = sum % 10;
            temp += digit;
            sum /= 10;
        }
        cout << temp << endl;
    }
    return 0;
}