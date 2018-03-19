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
#define FileIn(file) freopen(file".inp", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
#define PI  3.14159265358979323846
void Abdo(){std::ios_base::sync_with_stdio(0);
            cin.tie(NULL);
            cout.tie(NULL);}
const double E = 1e-12;
typedef  long long ll;
void file(){
            freopen("in.txt", "r", stdin);
            freopen("out.txt", "w", stdout);}
map<string,int>mp;
int main() {
Abdo();
int n;
vector<int>v;
cin>>n;
for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
int q;
cin>>q;
while(q--){
    int c;
    cin>>c;
    vector<int>:: iterator it;
    it=lower_bound(v.begin(),v.end(),c);
    --it;
    int z=*it;
    if(binary_search(v.begin(),v.end(),z))cout<<z<<' ';
    else cout<<'X'<<' ';
    int x=*upper_bound(v.begin(),v.end(),c);
    if(binary_search(v.begin(),v.end(),x))cout<<x<<fn;
    else cout<<'X'<<fn;
}



    return 0;}

