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

vl vec;
bool check(ll mid, int m)
{
	ll ans = 1, ss = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (ss + vec[i] <= mid)
			ss = ss + vec[i];
		else if (ans + 1 <= m)
			ss = 0, ans++, i--;
		else
			return false;
	}
	if (ans <= m)
		return true;
	return false;
}
int main() {
Abdo();
int n, m;
	ll lo, hi, mid, z;
	while (cin >> n >> m)
	{
		vec.resize(n);
		for (int i = 0; i < n; i++)
			cin >> vec[i];
		lo = 1, hi = 1e10;
		while (lo <= hi)
		{
			mid = (lo + hi) / 2;
			if (check(mid, m))
			{
				hi = mid - 1;
				z = mid;
			}
			else
				lo = mid + 1;
		}
		cout << z << "\n";
	}

return 0;}
