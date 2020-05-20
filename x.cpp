/*
 * I dont know actually why this is true but it passed
 * first , if we have numbers p1 , p2 , p3 .. then the probability is ( product of (1 / pi) ) * ( sum of ( pi / (1-pi) ) ) 
 * try two pointers approach , greedly while adding a new element to our elements is making our answer better we add it 
*/
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#include <bits/stdc++.h>
using namespace std;
#define sqr 270
//#define mp make_pair
#define mid (l+r)/2
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define era erase
#define C continue
#define mem(dp,i) memset(dp,i,sizeof(dp))
#define mset multiset
#define all(x) x.begin(), x.end()
#define gc getchar_unlocked
typedef long long ll;
typedef short int si;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
const ll inf=1e18;
const ll mod=1e9+7;
const ld pai=acos(-1);
int n ;
double a [1000009] ;
int main () {
	freopen ( "cowdate.in" , "r" , stdin  ) ;
    	freopen ( "cowdate.out", "w" , stdout ) ;
	cin >> n ;
	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> a[i] ;
	       	a [i] *= 0.000001 ;
	}
	int r = 0 ; 
	double sum = 0 , pro = 1 , ans = 0 ;
	for ( int l = 0 ; l < n ; l ++ ) {
                while ( r < n ) {
			double Sum = sum + a [r] / ( 1 - a[r] ) ;
			double Pro = pro * ( 1 - a [r] ) ;
			if ( Sum * Pro < sum * pro ) break ;
                        sum += a [r] / ( 1 - a[r] ) ;
                        pro *= ( 1 - a [r] ) ;
                        r ++ ;
                }
                ans = max ( ans , sum * pro ) ;
                sum -= a [l] / ( 1 - a [l] ) ;
                pro /= ( 1 - a [l] ) ;
        }
        cout << (int) ( ans * 1000000 ) << endl ;
}
