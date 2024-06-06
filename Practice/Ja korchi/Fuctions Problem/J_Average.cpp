#include<bits/stdc++.h>
using namespace std;
double meanOfArray(vector<double> v, int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }

    return sum/n;
}
int main()
{

    int n;
    cin >> n;
    vector <double> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << fixed << setprecision(7) <<meanOfArray(v, n) << endl;
    return 0;
}