#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(int x = s; x < e; x = x + b)
#define efr(val, where) for(auto& val : where)
#define el '\n'
#define co cout
#define ci cin
#define vtr vector
#define pb push_back
using namespace std;
int findMax(vtr<int>& v)
{
    int mx = INT_MIN;
    fr(i, 0, v.size(), 1)
    {
        mx = max(mx, v[i]);
    }
    return mx;
}
void solve()
{
    int n; cin  >> n;
    vtr<int> v(n);
    fr(i, 0, n, 1) cin >> v[i];
    int target = findMax(v);
    // cout << target << el;
    fr(i, 0, n, 1) if(v[i] == target) v[i] = 0;
    int highest = 0;
    int secHigh = -1;
    fr(i, 0, v.size(), 1)
    {
        if(v[i] != target)
        {
            highest = max(highest, v[i]);
            // secHigh = highest;
        }
    }
    // cout << highest << el;
    fr(i, 0, v.size(), 1)
    {
        if(v[i] != target && v[i] != highest)
        {
            secHigh = max(secHigh, v[i]);
        }
    }
    if(secHigh == -1) secHigh = highest;
    // cout << secHigh << el;
    if(n <= 2) cout << 0 << el;
    else cout << highest - secHigh << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}