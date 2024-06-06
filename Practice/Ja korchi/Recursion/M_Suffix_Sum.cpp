#include<bits/stdc++.h>
using namespace std;
long long int sumOfVector(int v[], int n,  int i)
{
    if(i == n) return 0;
    long long int sum = 0;
    sum = v[i] + sumOfVector(v, n, i + 1);
    return sum;
}
int main()

{
    int n, m;
    cin >> n >> m;
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int sum = sumOfVector(v, n, n-m);
    cout << sum << endl;
    return 0;
}