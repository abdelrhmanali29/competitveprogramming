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
int t,n;
int a[1000];
map<vector<int>,bool> solution;
vector<int> v;

void track(int k,int m,int sum,vector<int> v){
    if(sum==t){
        if(solution[v])return;
        solution[v]=true;
        for(int i=0;i<k;i++){
            printf(i==k-1? "%d" : "%d+",v[i]);
        }printf("\n");
        return;
    }
if(sum>t||m==n)return;
for(int i=m;i<n;i++){
    v.push_back(a[i]);
    track(k+1,i+1,sum+a[i],v);
    v.pop_back();
}
}




int main() {
fast();
for(;;){
  cin>>t>>n;
  if(t==0&&n==0)break;
  for(int i=0;i<n;i++)cin>>a[i];
  solution.clear();
  printf("Sums of %d:\n", t);
  track(0,0,0,v);
  if(solution.size()==0)printf("NONE\n");
}









return 0;}
