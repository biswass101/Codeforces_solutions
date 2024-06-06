#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        long long int sum1 = 0; long long int sum2 = 0;
        for(int i  = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        if(sum1 > sum2) cout << "Tsondu" << endl;
        else if(sum1 < sum2) cout << "Tenzing" << endl;
        else cout << "Draw" << endl;
    }

    return 0;
}