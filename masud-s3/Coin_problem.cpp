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
     int n,x,y,i,j,c=0;
     cin>>n>>x;
     int a[n+3];
     for(i=0;i<n;i++) cin>>a[i];
      sort(a,a+n);
      for(i=n-1;i>=0;i--)
      {
          while(x-a[i]>=0)
          {
            x-=a[i];
             c++;
          }
          if(x<=0) break;
      }
      cout<<c<<endl;
  }
}
