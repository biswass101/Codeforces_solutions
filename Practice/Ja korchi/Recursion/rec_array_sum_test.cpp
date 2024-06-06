#include<bits/stdc++.h>
using namespace std;
int sumOfVector(vector<int> v, int i)
{
    if(i == v.size()) return 0;
    int sum = 0;
    sum = v[i] + sumOfVector(v, i + 1);
    return sum;
}
int main()

{

    vector<int> v = {1, 2, 3, 4};
    cout << sumOfVector(v, 0) << endl;
    return 0;
}