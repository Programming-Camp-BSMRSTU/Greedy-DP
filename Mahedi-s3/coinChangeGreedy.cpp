#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb   push_back
#define T int time;        scanf("%d", &time); while(time--)
const ll N=1000000;
const int Nmax = 5e5+7;
vector < ll > ans ;
    
    void coinChange(ll coin[] , ll m , ll n){
           for( ll i = n - 1 ; i >= 0 ; i--){
           	  while(coin[i] <= m) m-=coin[i], ans.pb(coin[i]) ;
           }
         
           for(auto it: ans) cout << it << " " ;
           	cout << endl ;
    }

   

     

        int main(){

           ll n , m ; // n = number of coin m = total amount.
           cin >> n >> m ;
           ll coin[n+1] ;
           for( ll i = 0 ;  i < n ; i++)
           	cin >> coin[i] ;
            sort(coin , coin+n) ;
           coinChange(coin , m , n) ;
        }