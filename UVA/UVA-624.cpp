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
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<ll>vl;
#define FileIn(file) freopen(file".inp", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
#define PI  3.14159265358979323846
void fast(){std::ios_base::sync_with_stdio(0);
            cin.tie(NULL);
            cout.tie(NULL);}
const ll INF = 1000000000;
const double EPS = 1e-10;
ll gcd(ll a, ll b){ if (b == 0){ return a; }return gcd(b, a % b); }

int n,m,maxSum;
int cd[100];
vector<int>ans,tmp;

void findTrak(int id,int sum){
 if(sum>maxSum){
    maxSum=sum;
    ans=tmp;
 }
 for(int i=id;i<m;i++){
    if(sum+cd[i]<=n){
        tmp.push_back(cd[i]);
        findTrak(i+1,sum+cd[i]);
        tmp.pop_back();

    }
 }

return;

}





int main() {
fast();

while(EOF!=scanf("%d",&n)){
        scanf("%d",&m);
        for(int i=0;i<m;i++)
            scanf("%d",&cd[i]);
        maxSum = 0;
    tmp.clear();
    ans.clear();
    findTrak(0,0);

    vector<int>::iterator it;
    for (it = ans.begin(); it != ans.end(); it++)
      printf("%d ", *it);
    printf("sum:%d\n", maxSum);
}






return 0;}
