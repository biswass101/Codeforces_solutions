#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long sum = 0;
        sum = sum + n;
        while(n)
        {
            n = n / 2;
            sum = sum + n;
        }
        cout << sum << endl;
    }

    return 0;
}