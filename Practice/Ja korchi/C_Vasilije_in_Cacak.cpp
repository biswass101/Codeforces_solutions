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
    int n, k, x;
    cin >> n >> k >> x;
    ll maxSum = 0;
    ll minSum = 0;
    ll tmpSum = (n*(n+1)) / 2;
    minSum = (k*(k+1)) / 2;
    maxSum = tmpSum - ((n-k)*(n-k+1))/2;

    if(x >= minSum && x <= maxSum) cout << "YES" << el;
    else cout << "NO" << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}