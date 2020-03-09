#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include <unordered_map>

using namespace std;
typedef  long long int ll;
typedef vector<ll>vl;
typedef long double ld;


#define all(v) ((v).begin()), ((v).end())
#define boom main
#define cn(n)  scanf("%d", &n)
#define cnl(n)  scanf("%lld", &n)
#define F(i, a, b) for(int i=a; i<=b; i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define rrep(i, n) for(int i=n-1; i>=0; i--)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
#define R_(s)         freopen(s, "r", stdin)
#define W_(s)        freopen(s, "w", stdout)
void fast()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
const ll mod = 1e9;
ll gcd(ll a, ll b)
{
    return !b ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
ll power(ll x, ll y)
{
    if (y == 0)return 1;
    if (y == 1)return x;
    ll r = power(x, y / 2) % mod;
    return r%mod*r%mod*power(x, y % 2) % mod;
}
int fix_mod(int a, int k)
{
    return (a%k+k)%k;
}
bool valid(int i,int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int dx[] = { 1,  1, -1, -1, -1, 0,  0, 1};
int dy[] = { 1, -1, -1,  1,  0, 1, -1, 0};
const ld EPS = 1e-9, PI = 3.141592653589793238462643383279502884;
const int oo = numeric_limits<int>::max();
const long long N = 1e5+9, M = 4e3 + 5, OO = numeric_limits<ll>::max();

int main()
{

    fast();
    int n;
    cin>>n;
    if(n == 1){cout<<1<<fn<<1<<' '<<1<<fn;return 0;}
    cout<<1 + ((n)/2)<<fn;
    int x = 1+(n)/2;
    if(n % 2 == 0){
    F(i , 1 , n/2)cout<<1<<' '<<i<<fn;
    F(i , 1 , n/2)cout<<x<<' '<<i<<fn;
    }
    else {
      F(i , 1 , (n/2)+1)cout<<1<<' '<<i<<fn;

    F(i , 2 , n/2 +1)cout<<x<<' '<<i<<fn;
    }

    return 0;
}
 
