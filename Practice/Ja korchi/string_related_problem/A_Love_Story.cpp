#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        string s, cpyStr;
        cin >> s;
        cpyStr = "codeforces";
        int cnt = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != cpyStr[i])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}