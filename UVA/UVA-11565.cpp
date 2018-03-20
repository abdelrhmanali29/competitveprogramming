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
bool solve(int a, int b, int c) {
      for (int i = -100; i <= 100; i++)
              for (int j = -100; j <= 100; j++)
                  for (int k = -100; k <= 100; k++)
                      if (i!=j && j!=k && i!=k &&
                          i+j+k == a && i*j*k == b && i*i+j*j+k*k == c) {
                          cout << i << " " << j << " " << k << endl;
                          return true;
                      }
      return false;
 }

int main() {
Abdo();
int n;
cin>>n;
int a,b,c;
while(n--){cin>>a>>b>>c;
    if(!solve(a,b,c))cout<<"No solution." << fn;
}





return 0;}
