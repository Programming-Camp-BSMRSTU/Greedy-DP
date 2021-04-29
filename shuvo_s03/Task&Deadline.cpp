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
// 4
// 4 2 
// 3 5
// 2 7
// 4 5
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v;
    for(int i = 0; i < n; i++)
    {
        int duration, deadline; cin >>  duration >> deadline;
        v.pb({duration,deadline});
    }
    sort(all(v));
    ll ans = 0, now = 0;
    for(int i = 0; i < n; i++)
    {
        now += v[i].ff;
        ans += v[i].ss - now;
    }
    cout << ans << endl;
}

int main()
{
    IOS;
    int t = 1;
   // cin >> t;
    while(t--) solve();

    return 0;
}