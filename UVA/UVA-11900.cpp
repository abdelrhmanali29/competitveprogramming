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


int main() {
Abdo();
ll n,v=1;
cin>>n;
while(n--){
    int n,p,q;
    cin>>n>>p>>q;
    int a[100]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    //sort(a,a+n);
    int c=0,s=0;
    for(int i=0;i<n;i++){
       s+=a[i];
       if(s>q||c>=p)break;
       c++;
    }


    cout<<"Case "<<v++<<": "<<c<<endl;
}


return 0;}
