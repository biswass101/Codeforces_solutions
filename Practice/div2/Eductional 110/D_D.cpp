#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    map<int, int> mp;
    int max_box = 0;
    for(int i = 0 ;i < n ;i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        max_box = max(max_box, mp[x]);
    }

    cout << max_box;
    return 0;
}