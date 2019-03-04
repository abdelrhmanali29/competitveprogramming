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
#define cn(n)  scanf("%d", &n)
#define FileIn(file) freopen(file".inp", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for (int i=a; i<=b; i++)
#define rep(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
#define PI  3.14159265358979323846
ll gcd(ll a, ll b){ if (b == 0){ return a; }return gcd(b, a % b); }
void Abdo(){std::ios_base::sync_with_stdio(0);
            cin.tie(NULL);
            cout.tie(NULL);}
const int  N = 1e5 + 5, M = 1e5 +5, OO = 0x3f3f3f3f;
const double EPS = 1e-9;

int dx[]={0 , -1, -1, -1, 0, 1, 1,  1};
int dy[]={-1, -1,  0,  1, 1, 1, 0, -1};


int n , r  , u;
vector<pair<int, int> >vip;


bool isSorted(int m){
    for(int i=0; i<m; i++)
    {
        if(i)
        {
            if(vip[i].first > vip[i-1].first )
            return false;
        }

    }
    return true;
}


int main()
{
   scanf("%d" , &n);
   int m = n ;
    while(n--)
    {
        int x , y;
        scanf("%d %d" , &x , &y);
        vip.push_back({x , y});
        if(x == y) u++;
        else r++;
    }
    if(r) printf("rated\n");
    else  if(!isSorted(m))
            printf("unrated\n");
    else printf("maybe\n");





  return 0;
}
