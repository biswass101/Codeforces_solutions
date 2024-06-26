#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(int x = s; x < e; x = x + b)
#define rfr(x, s, e, b) for(int x = s; x >= e; x = x - b)
#define efr(val, where) for(auto& val : where)
#define all(x) x.begin(), x.end()
#define el '\n'
#define vtr vector
#define pb push_back
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define pr pair<int, int>
using namespace std;
bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() -1;
    while(i < j)
    {
        if(x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isEven(ll n)
{
    return n % 2 == 0;
}
bool isOdd(ll n)
{
    return n % 2 != 0;
}
bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
ll gcd(ll a, ll b)
{
    if(a < b) swap(a, b);
    ll ans;
    int rem = 1;
    while(true)
    {
        rem = a % b;
        if(rem == 0) 
        {
            ans = b;
            break;
        }
        a = b;
        b = rem;
    }
    return ans;
}
void solve()
{
    int n; cin >> n;
    vtr<int> v(n);
    fr(i, 0, n, 1) cin >> v[i];
    bool flag = true;
    int key = v[0];
    fr(i, 1, n, 1)
    {
        if(key != v[i])
        {
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes" << el;
    else
    {
        if(n == 2) cout<< "Yes" << el;
        else
        {
            set<int> st;
            fr(i, 0, n, 1)
            {
                st.insert(v[i]);
            }
            if(st.size() == 2)
            {
                int cnt1 = 1, cnt2 = 0;
                int firstVal = v[0];
                fr(i, 1, n, 1)
                {
                    if(v[i] == firstVal) cnt1++;
                    else cnt2++;
                }

                if((cnt1 == cnt2 + 1) or (cnt2 == cnt1 + 1) or (cnt1 == cnt2)) cout << "Yes" << el;
                else cout << "No" << el;
            }
            else cout << "No" << el;
        }
    }
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}