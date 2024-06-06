#include<bits/stdc++.h>
using namespace std;
bool isPrime(int i)
{
    if(i <= 1) return false;
    else
    {
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                return false;
            }
        }
        
        return true;
    }
}
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(isPrime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}