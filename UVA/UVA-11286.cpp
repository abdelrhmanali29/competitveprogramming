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

using namespace std;
typedef long long int ll;
typedef vector<ll>vl;
typedef long double ld;
#define boom main
#define cn(n)  scanf("%d", &n)
#define cnl(n)  scanf("%lld", &n)
#define FileIn(file) freopen(file".in", "r", stdin)
//freopen("morty.in" , "r" , stdin);
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for (int i=a; i<=b; i++)
#define rep(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.14159265358979323846
void Abdo()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll countBits(ll number)
{
    return (ll)log2(number)+1;
}
//3.14159265358979323846264338327950288419716939937510582097494459;
int dx[]= {0, -1, -1, -1, 0, 1, 1,  1};
int dy[]= {-1, -1,  0,  1, 1, 1, 0, -1};
const ld EPS = 1e-9, PI = 3.14159;
const long long N = 2e5 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;

int boom(void)
{
    int n;
    map<vector<int>, int> mp;
    while(cn(n), n)
    {
        mp.clear();
        rep(i, n)
        {
            vector<int> v(5);
            rep(i, 5)
            {
                int x;
                cn(x);
                v.push_back(x);
            }
            sort(v.begin(), v.end());
            mp[v]++;
        }
        int mx = 0;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            mx = max(mx, it->second);
        }
        int ans = 0;
        for(auto it = mp.begin() ; it != mp.end(); it++)
        {
            if(it->second == mx)ans++;
        }
        printf("%d\n",mx*ans);
    }


}
