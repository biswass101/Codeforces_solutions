#include<bits/stdc++.h>
using namespace std;
int main()
//Not solved
{

    int n, m;
    cin >> n >> m;
    vector <int> v1(n); //vector <int> v1_index_record(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
        //v1_index_record[i] = i;
    }
    vector <int> v2(m); vector <int> v2_index_record(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v2[i] == v1[j])
            {
                v2_index_record[i] = j;
                break;
            }
        }
    }
    /*for(int i = 0; i < m; i++)
    {
        cout << v2_index_record[i]  << " ";
    }*/
    //cout << endl;
    bool flag = true;
    for(int i = 0; i < m - 1; i++)
    {
        for(int j = i+1; j < m; j++)
        {
            if(v2_index_record[i] > v2_index_record[j])
            {
                flag = false;
                break;
            }
        }
    }
    if(flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}