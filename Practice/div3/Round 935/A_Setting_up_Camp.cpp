#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int64_t sum = a + (b/3);
    int x = ceil(c*1.0/3);
    if(b % 3 == 0) cout << sum + x << endl;
    else if(b % 3 == 1)
    {
        c -= 2;
        if(c < 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            sum++;
            int x = ceil(c*1.0/3);
            cout << sum + x << endl;
        }
    }
    else
    {
        c -= 1;
        if(c < 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            sum++;
            int x = ceil(c*1.0/3);
            cout << sum + x << endl;
        }
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}