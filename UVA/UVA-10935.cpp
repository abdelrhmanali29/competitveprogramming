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
ll gcd(ll a, ll b){ if (b == 0){ return a; }return gcd(b, a % b); }
void Abdo(){std::ios_base::sync_with_stdio(0);
            cin.tie(NULL);
            cout.tie(NULL);}
const double E = 1e-12;
typedef  long long ll;
void file(){freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);}
int main() {
Abdo();

while(1){
int n,c=0;
cin>>n;
if(n==0)return 0;

queue<int>q;
vector<int>v;
for(int i=1;i<=n;i++)q.push(i);int s=q.size();
while(s>1){
    v.push_back(q.front());
    q.pop();
    q.push(q.front());
    q.pop();
    c++;
    s=q.size();
}
printf("Discarded cards:");
for(int i=0;i<c;i++){
    printf(" %d",v[i]);
    if(i<c-1)printf(",");
}
printf("\n");
printf("Remaining card: %d\n",q.front());
}


return 0;}
