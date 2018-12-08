  #include <iostream>
    #include <string>
    #include <set>
    #include <map>
    #include <vector>
    #include <math.h>
    #include <algorithm>
    #include <iomanip>
    #include <stdio.h>
    #include <cstring>
    #include <queue>
    #include <deque>
    #include<stack>
 
    #define  all(v)         ((v).begin()),((v).end())
    #define  sz(v)	        ((int)(v).size())
    #define	 clr(v,d)       memset(v,d,sizeof(v))
    #define  lp(i,n)        for(int i=0; i<n; i++)
    #define  lpi(i,j,n)     for(int i=j; i<n; i++)
    #define  lpd(i,j,n)     for(int i=j; i>=n; i--)
    #define PI 3.14159265359
    typedef long long     ll;
    const double E = 1e-12;
 
using namespace std;
 
const int N = 2e4 + 5, M = 2e6 + 5, OO = 0x3f3f3f3f;
const int MAX = 22;
int mem[101][1001];
int n , k , adj[11];
int solve(int i=n-1 , int ra= k){
if(i==-1) return 0;
 
if(mem[i][ra]!=-1) return mem[i][ra];
 
int ret=solve(i-1,ra);
 
if(ra>=adj[i])
    ret=max(ret,solve(i-1,ra-adj[i])+adj[i]);
return mem[i][ra]=ret;
 
 
}
 
int main(){
int tst;
scanf("%d",&tst);
while(tst--){
clr(mem,-1);
clr(adj,0);
    scanf("%d %d",&n ,&k);
 
    lp(i,n){int r;
      scanf("%d",&r);
      lp(j,r){int c;
        scanf("%d",&c);
        adj[i]+=c;
      }
    }
printf("%d\n",solve());
 
 
}
 
 
	return 0;
}
 
