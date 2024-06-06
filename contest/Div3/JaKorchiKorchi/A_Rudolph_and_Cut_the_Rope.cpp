#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int cnt = 0;
        cin >> n;
        while(n--)
        {
            int a, b;
            cin >> a >> b;
            if(a > b) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}