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
#define cn(n)  scanf("%lld", &n)
#define FileIn(file) freopen(file".in", "r", stdin)
//freopen("morty.in" , "r" , stdin);
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for (int i=a; i<=b; i++)
#define rep(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.14159265358979323846
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
void Abdo()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
//3.141592653589793238462643 38327950288419716939937510582097494459;
int dx[]= {0, -1, -1, -1, 0, 1, 1,  1};
int dy[]= {-1, -1,  0,  1, 1, 1, 0, -1};
const ld EPS = 1e-9, PI = 3.14159;

const long long N = 1e2 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;

int boom(void)
{
    int n;
    while(cin>>n, n)
    {
    	cin.ignore();
        int ans = 0;
        int a[N] = {0}, r = 0;
        rep(i, n)
        {
        	string s;
		getline(cin , s);

            rep(j, s.size())
            {
                a[i] += (s[j] == 'X');
                if(s[j] == ' ')r++;
            }
        }
        if(!r)cout<<0<<fn;
        else
        {
            int mx = *max_element(a, a+n);
            rep(i,n)
            {
                ans += mx - a[i];
            }

        cout<<ans<<fn;
        }
    }
}


