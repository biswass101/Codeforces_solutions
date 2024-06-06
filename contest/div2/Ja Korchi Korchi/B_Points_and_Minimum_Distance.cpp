#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

	int t;	
    cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(2*n);
        vector<int> x, y;
        ll dist = 0;
		for(int i = 0; i < 2*n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int j = n;
        for(int i = 0; i < n; i++)
        {
            x.push_back(v[i]), y.push_back(v[j]);
            j++;
        }

        for(int i = 0; i < n - 1; i++)
        {
            dist += (abs(x[i] - x[i+1])) + (abs(y[i] - y[i+1]));
        }
        cout << dist << endl;
        for(int i = 0; i < n; i++)
        {
            cout << x[i] << " " << y[i] << endl;
        }
	}

	
}