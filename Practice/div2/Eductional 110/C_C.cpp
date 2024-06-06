#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    int en = 1;
    while(t--)
    {
        cout << "Scenario #" << en << ": ";
        int a, b; cin >> a >> b;
        int f = b;
        set<pair<int, int>> st;
        while(f--)
        {
            pair<int, int> pr;
            int x, y; cin >> x >> y;
            st.insert({x, y});
        }
        // cout << "st size: " << st.size() << endl;
        // for(auto& x : st) cout << x.first << " " << x.second << endl;
        if(st.size() == b) cout << "possible" << endl;
        else cout << "impossible" << endl;
        en++;
    }
    return 0;
}