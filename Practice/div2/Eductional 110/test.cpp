#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> n;
        int k = sqrt(n);
        if (n == k * k)
            cout << k << " " << 1 << endl;
        else if (n <= k * k + k + 1)
            cout << n - k * k << " " << k + 1 << endl;
        else
            cout << k + 1 << " " << (k + 1) * (k + 1) - n + 1 << endl;
    }
}