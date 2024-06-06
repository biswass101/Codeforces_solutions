#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mn = INT_MAX;
        int idx;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < mn) 
            {
                mn = arr[i];
                idx = i;
            }

        }
        arr[idx] += 1;
        long long pro = 1;
        for(int i = 0; i < n; i++)
        {
            pro *= arr[i];
        }
        cout << pro << endl;
    }
    return 0;
}