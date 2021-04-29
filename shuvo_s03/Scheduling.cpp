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
    vector<pair<int,int>>v;
    for(int i = 0; i< n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb({b,a});
    }
    sort(all(v));
    int cnt = 1;
    int last_end = v[0].ff;
    for(int i = 1; i < n; i++)
    {
        if(last_end < v[i].ss) cnt++, last_end = v[i].ff;
    }
    cout << cnt << endl;
}

int main()
{
    IOS;
    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}