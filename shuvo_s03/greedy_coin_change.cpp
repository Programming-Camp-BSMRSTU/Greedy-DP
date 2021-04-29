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
// 8 520
//1 2 5 10 20 50 100 200
void solve()
{
    int n, target;
    cin >> n >> target;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0;
    sort(a+1,a+n+1,greater<int>());
    for(int i = 1; i <= n; i++)
    {
        while(target >= a[i]) cnt++, target -= a[i];
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
