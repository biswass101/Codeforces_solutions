#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin >> n;
    int cnt = 0;
    int cnt1 = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector <int> v2(v);
    if(v[0] > 0)
    {
        for(int i = 1; i < n; i++)
        {
            if(i % 2 != 0 && v[i] > 0)
            {
                cnt++;
                v[i] *= -1;
            }
            if(i % 2 == 0 && v[i] < 0)
            {
                
                cnt++;
                v[i] *= -1;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(i % 2 != 0 && v2[i] < 0)
            {
                cnt1++;
                v2[i] *= -1;
            }
            if(i % 2 == 0 && v2[i] > 0)
            {
                
                cnt1++;
                v2[i] *= -1;
            }
        }
    }
    else if(v[0] < 0)
    {
        for(int i = 1; i < n; i++)
        {
            if(i % 2 != 0 && v[i] < 0)
            {
                cnt++;
                v[i] *= -1;
            }
            if(i % 2 == 0 && v[i] > 0)
            {
                
                cnt++;
                v[i] *= -1;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(i % 2 != 0 && v2[i] > 0)
            {
                cnt1++;
                v2[i] *= -1;
            }
            if(i % 2 == 0 && v2[i] < 0)
            {
                
                cnt1++;
                v2[i] *= -1;
            }
        }
    }
    int minimumOperation = (cnt < cnt1)? cnt : cnt1;
    cout << minimumOperation << endl;
    return 0;
}