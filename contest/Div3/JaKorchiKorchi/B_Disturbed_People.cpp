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
void solve()
{
    int n; cin >> n;
    vtr<int> v(n);
    fr(i, 0, n, 1) cin >> v[i];
    int cnt = 0;
    fr(i, 1, n - 1, 1)
    {
        if(v[i] == 0 && v[i-1] == 1 && v[i+1] == 1)
        {
            cnt += 1;
            v[i-1] = 0, v[i+1] = 0;
        }
    }
    cout << cnt << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}