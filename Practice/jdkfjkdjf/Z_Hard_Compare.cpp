#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d; cin >> a >> b >>c >>d;
    double res_1 = b * log2(a);
    double res_2 = d * log2(c);
    if(res_1 > res_2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}