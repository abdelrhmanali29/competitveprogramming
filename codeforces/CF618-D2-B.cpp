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
const int N = 60;
int n;
int a[N];

int main() {
Abdo();
cin>>n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int x;
			cin>>x;
			a[i] = max(a[i], x);
		}
	}
	for (int i = 0; i < n; i++)
		if (a[i] == n - 1)
		{
			a[i] = n;
			break;
		}
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");


return 0;}
