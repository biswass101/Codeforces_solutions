#include<bits/stdc++.h>
using namespace std;
vector<int> getBinary(int n)
{
    vector <int> binaryContainer;
    while(n)
    {
        int rem = n % 2;
        binaryContainer.push_back(rem);
        n = n / 2;
    }

    return binaryContainer;
}
bool isBNumberPalindrome(vector<int> nB, int n)
{
    if(n % 2 == 0) return false;
    vector<int> cpy(nB);
    reverse(cpy.begin(), cpy.end());
    for(int i = 0; i < cpy.size(); i++)
    {
        if(nB[i] != cpy[i])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{

    int n;
    cin >> n;
    getBinary(n);
    vector<int> nB = getBinary(n);
    if(isBNumberPalindrome(nB, n) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}