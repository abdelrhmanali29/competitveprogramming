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
ll n,a,b,c;
ll mem[N];
ll solve(int rem=n){
if(rem<0) return -1e7;
if(rem==0) return 0;
ll &ret=mem[rem];
if(~ret) return ret;
ret = max( solve(rem-a)+1  , max(solve(rem-b)+1 , solve(rem-c)+1) );
return ret;
}


int main() {
memset( mem,-1,sizeof mem);
scanf("%d %d %d %d",&n,&a,&b,&c);
printf("%d",solve(n));





	return 0;
}
