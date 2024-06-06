#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int x = s.find("010"); int y = s.find("101");
        if(x > -1 || y > -1) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }

    return 0;
}