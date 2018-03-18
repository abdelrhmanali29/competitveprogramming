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
int n,m,w;
char s[100];
scanf("%d %d",&n,&m);
while(n--){
    scanf("%s %d",&s,&w);
    mp[s]=w;}
while(m--){
    w=0;
    while(scanf("%s",&s)!=EOF){
        if(s[0]=='.')break;
        w+=mp[s];
    }
    printf("%d\n",w);
}


    return 0;}
