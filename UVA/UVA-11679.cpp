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

#define cn(n)  scanf("%lld", &n)
#define FileIn(file) freopen(file".in", "r", stdin)
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
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;

const long long N = 1e4 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;

int main()
{
	//freopen("morty.in" , "r" , stdin);
	int  b , n;
	while(1){
		cin>>b>>n;
		if(!b && !n)break;
		int a[N] = {0};
		rep(i,b)cin>>a[i];
		int d , c ,v;
		rep(i,n){
			cin>>d>>c>>v;
			d--;
			c--;
			a[d] -= v;
			a[c] += v;
		}

		char ans = 'S';
		rep(i,b){
			if(a[i] < 0)ans = 'N';
		}
		cout<<ans<<endl;
	}

    return 0;
}

