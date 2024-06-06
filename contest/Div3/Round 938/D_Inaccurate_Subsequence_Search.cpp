#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (ll i = 0; i < n; i++)
#define forij(j, i) for (ll j = 0; j < i; j++)
#define forj(j, n) for (ll j = 0; j < n; j++)
#define forv(i, v) for (ll i = 0; i < v.size(); i++)
#define forn11(i, n) for (ll i = 1; i < n - 1; i++)
#define forn1(i, n) for (ll i = 1; i <= n; i++)
#define salam for (int i = n; i >= 1; i--)
#define forn2(i, n) for (ll i = 2; i <= n; i++)
#define forr(n, i) for (ll i = n; i >= 0; i--)
#define forr1(n, i) for (ll i = n - 1; i >= 0; i--)
#define fors(i, s) for (int i = 0; i < s.size(); i++)
#define fors1(i, s) for (int i = 0; i < s.size() - 1; i++)
#define forsn(i, s, n) for (int i = s; i < n; i++)
#define rforn(i, s) for (int i = s; i >= 0; i--)
#define rforsn(i, s, n) for (int i = s; i >= n; i--)
#define el endl
#define F first
#define S second
#define ll long long int
void solve()
{
    ll n, m, k; cin >> n >> m >> k;
    map<ll, ll> mp, mp2;
    vector<ll> a(n), b(m);
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    for (int x : b)
    {
        mp[x]++;
    }
    ll rem = 0, ans = 0;
    forn(i, m)
    {
        mp2[a[i]]++;
    }
    for (auto it : mp)
    {
        int v = it.F;
        if (mp2.find(v) != mp2.end())
        {
            rem += min(mp[v], mp2[v]);
        }
    }

    if (rem >= k)
    {
        ans++;
    }

    if (n == m)
    {
        cout << ans << el;
    }
    forn(i, n - m)
    {
        if (a[i] != a[i + m])
        {
            rem -= min(mp[a[i]], mp2[a[i]]);
            rem -= min(mp[a[i + m]], mp2[a[i + m]]);
            mp2[a[i]]--;
            mp2[a[i + m]]++;
            rem += min(mp[a[i]], mp2[a[i]]);
            rem += min(mp[a[i + m]], mp2[a[i + m]]);
        }

        if(rem >= k) ans++;
            
    }
    cout << ans << el;
}
signed main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}