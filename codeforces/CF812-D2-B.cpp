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
#define all(v) ((v).begin()), ((v).end())
#define boom main
#define cn(n)  scanf("%d", &n)
#define cnl(n)  scanf("%lld", &n)
#define F(i, a, b) for(int i=a; i<=b; i++)
#define rep(i, n) for(int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.1415926
//5358979323846
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
int dx[] = {1,  1, -1, -1 };
int dy[] = {1, -1, -1,  1 };
const ld EPS = 1e-9, PI = 3.141592653589793238462643383279502884;
const long long N = 1e5 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;
int boom(void)
{
    Abdo();
    int l1, s1 , r1, p1;
    int l2, s2 , r2, p2;
    int l3, s3 , r3, p3;
    int l4, s4 , r4, p4;

    cin>>l1>>s1>>r1>>p1;
    cin>>l2>>s2>>r2>>p2;
    cin>>l3>>s3>>r3>>p3;
    cin>>l4>>s4>>r4>>p4;
    if(p1 && (l1 || r1 || s1 || r4 || s3 || l2))cout<<"YES";
    else if(p2 && (l2 || r2 || s2 || r1 || s4 || l3))cout<<"YES";
    else if(p3 && (l3 || r3 || s3 || r2 || s1 || l4))cout<<"YES";
    else if(p4 && (l4 || r4 || s4 || r3 || s2 || l1))cout<<"YES";
    else cout<<"NO";

}
