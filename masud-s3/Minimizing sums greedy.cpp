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
     int n,i,j,x,y,mn=INT_MAX,mid,s=0,s1=0;
     cin>>n;
     int a[n+2];
     for(i=0;i<n;i++) cin>>a[i];
     sort(a,a+n);
      y=a[n/2];
      for(i=0;i<n;i++)
      {
           s+=abs(a[i]-y);
      }
      y=a[(n-1)/2];
       for(i=0;i<n;i++)
      {
           s1+=abs(a[i]-y);
      }
      if(s<=s1) cout<<a[n/2]<<endl;
      else cout<<a[(n-1)/2]<<endl;
  }
}
