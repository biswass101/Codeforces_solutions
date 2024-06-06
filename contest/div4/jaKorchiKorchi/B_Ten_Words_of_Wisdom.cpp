#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int res[n], qua[n];
        for(int i = 0; i < n; i++)
        {
            cin >> res[i];
            cin >> qua[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(res[i] > 10)
            {
                qua[i] = -1;
            }
        }

        int mx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            mx = max(mx, qua[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(mx == qua[i])
            {
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}