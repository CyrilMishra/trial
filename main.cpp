/**
 * Created By : Cyril Mishra
 * DateTime:    
 */

 #include <bits/stdc++.h>

 using namespace std ;

    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>

    #define endl          "\n"
    #define int           long long int
    #define vi            vector<int>
    #define vvi           vector < vi >
    #define pii           pair<int,int>
    #define mii           map<int,int>
    #define pq            priority_queue<int>
    #define mod           1000000007
    #define inf           1000000000000000001;
    #define all(c)        c.begin(),c.end()
    #define mp(x,y)       make_pair(x,y)
    #define sti           set<int>
    #define mem(a,val)    memset(a,val,sizeof(a))
    #define eb            emplace_back
    #define ff            first
    #define ss            second
    #define null          nullptr  
    #define ii(x)         int x; cin >> x;
    #define is(x)         string x; cin >> x;
    #define trailZero(x)  builtin_ctzll(x)
    #define loop(x,a,n)   for(int x=a;x<n;x++)
    #define loopi(a, n)   for(int i=a;i<n;i++)
    #define loopj(b, m)   for(int j=b;j<m;j++)
    #define rloop(n, a)   for(int i=n;i>=a;i--)
    #define setOne(x)     builtin_popcountll(x)
    #define debug(x)      cout<<#x<<": "<<x<<endl
    #define sp(x, y)      fixed<<setprecision(y)<<x
    #define pqs           priority_queue<int,vi,greater<int>>
    #define debug2(x, y)  cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl
    #define fast          ios_base::sync_with_stdio(false);cin.tie(NULL)
    #define _pb           push_back  

    #define tc            int t=1;while(t--)


const int MOD = 1e9 + 7;
const int EPS = 1e-9;
const int N = 1e5 + 5;

void solve(){
	int x =1;
	bool f = true ;
	for(int i=13;i<=24;i++){
      x*=i ;
   }
   cout<<x ;

}

signed main(){
   std::ios::sync_with_stdio(false);
   // cin.ignore(); must be there when using getline(cin, s)
   #ifdef SIEVE
      sieve();
   #endif
   #ifdef NCR
      init();
   #endif
   tc {
      solve() ;
   }
   return 0;
}