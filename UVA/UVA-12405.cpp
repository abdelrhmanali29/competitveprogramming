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


int main() {
fast();
int t, n, i, j, k, l, m, counter;
	char arr[1000];
	cin >> t;
	for (i = 1; i <= t; i++){
		counter = 0;
		cin >> n;
		for (j = 0; j < n; j++){
			cin >> arr[j];
		}
		for (k = 1; k <= n;){
			if (arr[k - 1] == '.'){

				counter++;
				k = k + 3;
			}
			else{
				k++;
			}



		}
		printf("Case %d: %d\n", i, counter);
	}
return 0;}
