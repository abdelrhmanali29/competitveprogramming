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

const long long   N = 1e3 + 5, M = 1e5 +5, OO = 0x3f3f3f3f;

int n , arr[N] , ans ;
int solve(int i){
	int sum = 1;
	for(int j = i; j<n; j++){
		if(j < n-1 && arr[j] >= arr[j+1]){
			sum++;
		}
		else break;
	}
	for(int j = i; j>=0; j--){
		if(j > 0 && arr[j] >= arr[j-1])sum++;
		else break;
	}

	return sum;
}




int main()
{
	cin>>n;
	rep(i , n)cin>>arr[i];
	rep(i , n){
		ans = max(ans , solve(i));
	}
	cout<<ans<<endl;


return 0;
}
