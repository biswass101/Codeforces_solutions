#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    char str[3] = "Jm";
    cout << "Enter a string: ";
    cin >> s;
    cout << s << endl;
    s.push_back(str[0]);
    cout << s << endl;
    return 0;
}