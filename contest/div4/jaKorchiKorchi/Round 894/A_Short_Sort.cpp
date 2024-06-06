#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x, idol = "abc";
        cin >> x;
        if(x == idol) cout << "YES" << endl;
        else
        {
            string a, b, c;
            a = b = c = x;

            char tmp = a[1];
            a[1] = a[0];
            a[0] = tmp;

            char tmp1 = b[2];
            b[2] = b[0];
            b[0] = tmp1;

            char tmp2 = c[2];
            c[2] = c[1];
            c[1] = tmp2;

            if(a == idol || b == idol || c == idol) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
    return 0;
}