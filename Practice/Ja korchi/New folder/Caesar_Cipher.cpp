#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int len;
        cin >> len;
        getchar();
        string s,t,u;
        cin >> s >> t >> u;
        string x;
        int dist = abs(s[0] - t[0]);
        for(int i = 0; i < s.size(); i++)
        {
            int z = 'z' - u[i];
            if(dist > z)
            {
                int r = dist - z;
                x.push_back(u[i] + r);
            }
            else
            x.push_back(u[i] + dist);
        }
        
        cout << x << endl;
    }

    return 0;
}