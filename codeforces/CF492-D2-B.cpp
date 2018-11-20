#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstdio>
#include<stdio.h>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long ll;
typedef vector<ll>vl;
typedef long double ld;

#define cn(n)  scanf("%d", &n)
#define FileIn(file) freopen(file".inp", "r", stdin)
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
//3.14159265358979323846264338327950288419716939937510582097494459;
int dx[]= {0, -1, -1, -1, 0, 1, 1,  1};
int dy[]= {-1, -1,  0,  1, 1, 1, 0, -1};
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;

const long long N = 1e3 + 5, M = 1e5 +5, OO = 0x3f3f3f3f;


int main()
{
	int n , l , arr[N];
	cin>>n>>l;
	rep(i , n)cin>>arr[i];
	sort(arr , arr+n);
	int maxSub = -OO;
	for(int i=1; i<n; i++){
		maxSub = max(maxSub ,(arr[i] - arr[i-1]));
	}
	double mx = maxSub , mx2 = 0;
	mx /= 2;
	if(mx < arr[0])mx = arr[0];
	if(arr[n-1] < l)mx2 = l - arr[n-1];
	if(mx2 > mx)mx = mx2;
	cout<<fixed<<setprecision(10)<<mx<<endl;






return 0;
}
