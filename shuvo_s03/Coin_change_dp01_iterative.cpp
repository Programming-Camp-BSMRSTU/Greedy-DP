#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
const int mod=1e9+7;
const int N=1e5+9;

void solve()
{
    ll n, target;
    cin >> n >> target;
    vector<ll>a;
    for(int i = 0; i < n; i++) 
    {
        ll x; cin >> x; a.pb(x);
    }
    ll dp[N];
    dp[0] = 0;
    for(int i = 1; i <= target; i++)
    {
        dp[i] = INT_MAX;
        for(auto c: a)
        {
            if(i >= c) dp[i] = min(dp[i],1+dp[i-c]);
        }
    }
    cout << dp[target] << endl;
      
}

int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}