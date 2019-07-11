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
//#include<windows.h>

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
#define rrep(i, n , b) for(int i=n-1; i>=b; i--)
#define foreach(it,x)  for(__typeof((x).begin()) it = (x.begin()); it != (x).end(); it++)    )
#define clr(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
#define R_(s)         freopen(s, "r", stdin)
#define W_(s)        freopen(s, "w", stdout)
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif  !ONLINEJUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    ll r = power(x, y / 2) % mod;
    return r%mod*r%mod*power(x, y % 2) % mod;
}
int fix_mod(int a, int k)
{
    return (a%k+k)%k;
}
int dx[] = { 1,  1, -1, -1, -1, 0,  0, 1};
int dy[] = { 1, -1, -1,  1,  0, 1, -1, 0};
const ld EPS = 1e-9, PI = 3.141592653589793238462643383279502884;
const int oo = numeric_limits<int>::max();
bool valid(int i,int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m ;
}
int dx1[] = {1, -1, 0, 0};
int dy1[] = {0, 0, 1, -1};
const long long N = 1e5+9, M = 4e3 + 5, OO = numeric_limits<ll>::max();
int n, m;
vector<int> adj[201];
int vis[201];

int rev(int x){
   return 3 - x;
}
bool ok;
void DFS(int u)
{
   for(auto it : adj[u]){
      if(!vis[it]){
         vis[it]= rev(vis[u]);
         DFS(it);
      }else if(vis[it]==vis[u]){
         ok=0;return;
      }
   }

}

int main()
{
    file();
    int cse = 1;
    while(cin>>n &&  n)
    {
        cin>>m;
        memset(vis, 0, sizeof vis);
        rep(i,201)adj[i].clear();
        rep(i, m)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        ok=1;
        for(int i =0 ; i<n; i++)
        {
            if(vis[i] == 0)
            {
                vis[i] = 1;
                DFS(i);
            }
        }
      if(ok)printf("BICOLORABLE.\n");
      else printf("NOT BICOLORABLE.\n");
    }
    return 0;
}






