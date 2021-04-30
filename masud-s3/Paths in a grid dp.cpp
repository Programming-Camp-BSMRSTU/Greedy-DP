
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
#define     memn(a)     memset(a , -1 ,sizeof a);
ll dp[1000][1000],a[1000][1000];
ll fun(int i,int j)
{
  if(i<1||j<1) return 0;
  if(dp[i][j]!=-1) return dp[i][j];
  dp[i][j]=max(fun(i-1,j),fun(i,j-1))+a[i][j];
  return dp[i][j];

}
int main()
{

  int t = 1;
  cin >> t;
  while (t--)
  {
     memn(dp);
      int n,i,m,x,y,j;
     cin>>n>>m;
     for(i=1;i<=n;i++)
     {
      for(j=1;j<=m;j++) cin>>a[i][j];
     }
   cout<<fun(n,m)<<endl;
  }

}
