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
const int N=3e3+9;
ll dp[N];
ll n, target;
ll a[N];
ll  fun(ll sum)
{
    if(sum == 0) return 0;
    if(sum < 0) return INT_MAX;
    if(dp[sum]) return  dp[sum];
    dp[sum] = (ll) INT_MAX;
    for(int i = 1; i<= n; i++) dp[sum] = min(dp[sum],fun(sum-a[i])+1);
    return dp[sum];
}
void solve()
{
    cin >> n >> target;
    for(int i = 1; i <= n; i++) cin >> a[i];
    cout << fun(target) << endl;
}

int main()
{
    IOS;
    int t =1;
   // cin >> t;
    while(t--) solve();

    return 0;
}
