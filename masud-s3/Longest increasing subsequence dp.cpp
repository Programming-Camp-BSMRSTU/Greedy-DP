
#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
//#define mp  make_pair
#define     REP(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int dp[10000][10000];
int mx = 1e9, n, w;
int a[100000];
int fun(int i, int x)
{
  int x1, y;
  if (i == n) return 0;
  if (dp[i][x] != -1)
  {
    return dp[i][x];
  }
  if (a[i] > x)
  {
    x1 = 1 + fun(i + 1, a[i]);
    y = fun(i + 1, x);
    dp[i][x] = max(x1, y);
    return dp[i][x];
  } else
  {
    dp[i][x] = fun(i + 1, x);
    return dp[i][x];
  }
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    memn(dp);
    int i, x, y;
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
    int ans = fun(0,0);
    cout << ans << endl;

  }
}
