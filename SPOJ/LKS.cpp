#include <bits/stdc++.h>
using namespace std;
#define  ll              long long
#define  all(v)         ((v).begine()),((v).end())
#define  sz(v)	        ((int)(v).size())
#define	 clr(v,d)       memset(v,d,sizeof(v))
#define  lp(i,n)        for(int i=0; i<n; i++)
#define  lpi(i,j,n)     for(int i=j; i<n; i++)
#define  lpd(i,j,n)     for(int i=j; i>=n; i--)
#define PI 3.14159265359

const ll N = 2e6+5, M = 1e3, OO = 0x3f3f3f3f;

ll k , n , p[N] , W[N] ;
ll dp[2][N];

ll solve(){
 for(int r=0;r<=k;++r)
    dp[0][r]=p[0]*(r>=W[0]);
 for(int i=1;i<n;++i){
    for(int w=0;w<=k;++w){
        ll &res=dp[i&1][w];
        res=dp[(i-1)&1][w];
        if(W[i]<=w)
            res=max(res,dp[(i-1)&1][w-W[i]]+p[i]);
    }
 }
return dp[(n-1)&1][k];
}


int main() {
scanf("%lld %lld",&k,&n);
    //memset(me,-1,sizeof me);
lp(i,n){
    scanf("%lld %lld",p+i ,W+i);
}
printf("%lld\n",solve());

	return 0;
}
