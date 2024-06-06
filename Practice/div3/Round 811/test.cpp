#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n, H, M; cin >> n >> H >> M;
    ll mstr_min = (H * 60 * 1ll) + M;
    ll minitue = INT_MAX;
    // vll v;
    while(n--)
    {
        ll cpy_H = H, cpy_M = M;
        ll h, m; cin >> h >> m;
        if(H == h and M == m)
        {
            cout << '0' << ' ' << '0' << endl;
            return;
        }
        ll total_min = 0;
        if(H < h)
        {
            total_min += (60 - cpy_M);
            cpy_H++;
            total_min += ((h - cpy_H) * 60);
            total_min += m;
            // v.pb(total_min);
            minitue = min(minitue, total_min);
        }
        else
        {
            total_min += (60 - cpy_M);
            cpy_H++;
            total_min += ((24 - cpy_H) * 60);
            total_min += ((h * 60) + m);
            minitue = min(minitue, total_min);
        }
    }

    cout << (int)(minitue / 60) << " " << (minitue % 60) << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}