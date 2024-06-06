#include<bits/stdc++.h>
using namespace std;
long long int fibo_term_n(int n)
{
    long long int first  = -1;
    long long int second = 1;
    long long int fibo = 0;
    for(int i = 1; i <= n; i++)
    {
        fibo = first + second;
        first = second;
        second = fibo;
    }
    return fibo;
}
int main()

{

    int n;
    cin >> n;
    long long int x = fibo_term_n(n);
    cout << x ;

    return 0;
}