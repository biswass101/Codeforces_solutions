#include<bits/stdc++.h>
using namespace std;
int main()

{

    int a, b;
    char str[1000];
    cin >> a >> b >> str;
    // cout << str << endl;
    // cout << str[a];
    int flag = false;
    if(str[a] == '-')
    {
        for(int i = 0; str[i] != '\0'; i++)
        {   if(i == a) continue;

            if(str[i] >= '0' && str[i] <= '9')
            {
                flag = true;
            }
            
            else
            {
                flag = false;
                break;
            }

        }
    }
    if(flag == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}