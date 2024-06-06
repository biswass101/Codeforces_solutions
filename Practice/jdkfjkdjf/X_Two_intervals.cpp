#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if(a > d or b < c) cout << -1 << endl;
    else cout << max(a, c) << " " << min(b, d) << endl;
    return 0;
}