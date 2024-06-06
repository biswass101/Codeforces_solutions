#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        string s, t;
        string newstr;
        cin >> s >> t;
        int len1 = s.length(); int len2 = t.length();
        if(len1 < len2)
        {
            for(int i = 0; i < len1; i++)
            {
                newstr.push_back(s[i]);
                newstr.push_back(t[i]);
            }

            for(int i = len1; i < len2; i++)
            {
                newstr.push_back(t[i]);
            }
        }
        else if(len1 > len2)
        {
            for(int i = 0; i < len2; i++)
            {
                newstr.push_back(s[i]);
                newstr.push_back(t[i]);
            }
            for(int i = len2; i < len1; i++)
            {
                newstr.push_back(s[i]);
            }
        }
        else
        {
            for(int i = 0; i < len2; i++)
            {
                newstr.push_back(s[i]);
                newstr.push_back(t[i]);
            }
        }
        cout << newstr << endl;
    }

    return 0;
}