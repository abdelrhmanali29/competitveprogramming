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
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for(int i=a; i<=b; i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.14159265358979323846
void file()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
}
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
const long long N = 1e4 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;
ll arr[N];
int n, m;
bool valid(ll mid)
{
    int sum = 0, cnt = 0;
    rep(i, n)
    {
    	if(sum + arr[i] <= mid)sum += arr[i];
    	else{
		sum = arr[i];
		cnt++;
    	}
    }
    	if(sum)cnt++;
	return cnt <= m;
}


int boom(void)
{
    while(scanf("%d %d", &n,&m) != EOF)
    {
        ll mx = 0;
        rep(i, n)
        {
            cin>>arr[i];
            mx = max(mx, arr[i]);
        }
        ll s = mx, e = 1e10, ans = 0;
        while(s <= e)
        {
            ll mid = s+e>>1;
            if(valid(mid))
            {
                ans = mid;
                e = mid -1;
            }
            else s = mid + 1 ;
        }

        cout<<ans<<fn;

    }


}



