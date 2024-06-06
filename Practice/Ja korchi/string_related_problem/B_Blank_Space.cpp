#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        vector <int> spaceContainer;
        bool isInSeg = false;
        int cntSpace = 0;
        for(int i = 0; i <= n; i++)
        {
            if(isInSeg)
            {
                if(i == n || v[i] == 1)
                {
                    isInSeg = false;
                    spaceContainer.push_back(cntSpace);
                    cntSpace = 0;
                }
            }
            if(v[i] == 0)
            {
                isInSeg = true;
                cntSpace++;
            }
            
        }
        int maxSpace = 0;
        for(int i = 0; i < spaceContainer.size(); i++)
        {
            maxSpace = max(maxSpace, spaceContainer[i]);
        }
        cout << maxSpace << endl;
    }

    return 0;
}