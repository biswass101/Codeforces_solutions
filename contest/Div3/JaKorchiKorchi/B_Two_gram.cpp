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
    string x; cin >> x;
    map<string, int> mp;
    list<char> li;
    int w = 2;
    int i = 0, j = 0;
    while(j < n)
    {
        li.push_back(x[j]);
        if(j >= w - 1)
        {
            string tmp;
            tmp += li.front();
            tmp += li.back();
            mp[tmp]++;
            li.pop_front();
            i++;
        }
        j++;
    }
    int mx = 0;
    string ans;
    efr(pr, mp)
    {
        if(pr.second > mx)
        {
            mx = pr.second;
            ans = pr.first;
        }
    }

    cout << ans << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}