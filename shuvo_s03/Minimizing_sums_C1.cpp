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
const int N=3e5+9;

void solve()
{
    int n; 
    cin >> n;
    ll a[n+1];
    for(ll i = 1; i <= n; i++) cin>> a[i];
    int mid;
    if(n&1) mid = (n+1)/2;
    else mid = n / 2;
    ll ans = 0;
    for(int i = 1; i <= n; i++) ans += abs(a[mid] - a[i]);
    cout << ans << endl;    
}

int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}