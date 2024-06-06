#include<bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long int
ll digitSum(ll n){
    ll sum = 0;
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++)
    {
        sum += (num[i] - '0');
    }
    return sum;

}
const int N = 2e5 + 10;
map<ll, ll> mp;

void generate() {
    ll sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += digitSum(i);
        mp[i] = sum;
    }
}
void solve(){
    ll n;
    cin >> n;
    if (n <= 9) {
        cout << (n * (n  + 1)) / 2 << el;
        return;
    }
    
    cout << mp[n] << el;
}

int main()
{
    generate();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}