#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//Copied from Algoboat for figuring out mistake

bool Possible(vector<ll>& arr, ll w, ll C)
{
    ll total = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ll side = (2LL * w) + arr[i];
        ll area = side * side;
        total += area;
        if (total > C)
            return false;
    }
    return true;
}

int main(){
   Faster;
   int t;               cin>>t;
   while(t--){
      ll n,C;           cin>>n>>C;
      vector<ll> arr(n);

      for(int i=0;i<n;i++){
         cin>>arr[i]; 
      }
      ll low=0LL,high=(ll)1e10,ans;
      while(low<=high){
         ll mid=low+(high-low)/2LL;
         if(Possible(arr, mid, C)){
            ans=mid;
            low=mid+1LL;
         }
         else{
            high=mid-1LL;
         }
      }

      cout<<ans<<endl;
   }
   return 0;
}
