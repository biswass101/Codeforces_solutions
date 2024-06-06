#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> check(n, 0);
    for(int i = 0; i < n; i++) //O(n)
    {
        cin >> v[i];
    }
    bool chek_vetor = true;
    for(int i = 0; i < n; i++) //O(n)
    {
        if(v[i] % 2 != 0)
        {
            chek_vetor = false;
            break;
        }
    }
    if(chek_vetor == false) cout << 0 << endl;
    else
    {
        for(int i = 0; i < n; i++)//O(n)
        {
            while(v[i] != 0) //O(log a[i])
            {
                int rem = v[i] % 2;
                if(rem != 0) break;
                check[i]++;
                v[i] = v[i] / 2;
            }
        }

        int mn = INT_MAX;
        for(int i = 0; i < n; i++) //O(n)
        {
            mn = min(mn, check[i]);
        }
        cout << mn << endl;
    }    
    return 0;
}