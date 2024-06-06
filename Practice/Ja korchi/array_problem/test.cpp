// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    // vector <int> v(n);
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v+n);
    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    bool flag = false;
    while(l <= r)
    {
        int mid = (l + r)/2;
        if(v[mid] == x)
        {
            flag = true;
            break;
        }
        if(x > v[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if(flag == true) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}