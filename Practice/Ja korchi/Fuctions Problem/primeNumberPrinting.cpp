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
void printPrimeNumbers(int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        if(isPrime(i)) cout << i << " ";
    }
}
int main()
{
    printPrimeNumbers(0, 100);
}