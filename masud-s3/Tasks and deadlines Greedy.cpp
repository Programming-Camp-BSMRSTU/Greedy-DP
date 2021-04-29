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
int main()
{
  int t = 1, fac = 1;
  cin >> t;
  while (t--)
  {
     int n,i,x=0,y,z,c=1,ans=0;
     cin>>n;
     pair<int,int>p[n+2];
     for(i=0;i<n;i++) cin>>p[i].first>>p[i].second;
      sort(p,p+n);
       for(i=0;i<n;i++)
       {
          x+=p[i].first;
          ans+=(p[i].second-x);
       }
       cout<<ans<<endl;
  }
}
