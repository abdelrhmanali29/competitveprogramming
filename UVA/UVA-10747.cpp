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

int n,q,c=1,a[100000],p=0;
int x;
int main() {
Abdo();
while(1){
    cin>>n>>q;
    if(n==0&&q==0)return 0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout << "CASE# " << c++ << ":\n";
    while (q--)
        {

            cin >> x;

            auto iter = lower_bound(a, a+n, x);
            if (iter == a + n || *iter != x)
                cout << x << " not found\n";
            else
                cout << x << " found at " << (iter - a) + 1 << '\n';
        }
}

return 0;}
