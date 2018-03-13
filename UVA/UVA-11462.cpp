//#include <bits/stdc++.h>
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
#define   fn           "\n"
#define  all(v)         ((v).begin()),((v).end())
#define  sz(v)	        ((int)(v).size())
#define	 clr(v,d)       memset(v,d,sizeof(v))
#define  lp(i,n)        for(int i=0; i<n; i++)
#define  lpi(i,j,n)     for(int i=j; i<n; i++)
#define  lpd(i,j,n)     for(int i=j; i>=n; i--)
#define PI  3.14159265358979323846
const double E = 1e-12;
typedef  long long ll;
using namespace std;
void file(){
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
void Abdo(){
        std::ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
    }
int main() {
Abdo();
while(1){
ll n,a[2000002];
    scanf("%lld", &n);
    if(n==0)return 0;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);

    sort(a+1, a+n+1);

    for (int i = 1; i <= n; i++)
    {
        printf("%lld", a[i]);
        if(i<n)printf(" ");
    }
    printf("\n");}
return 0;}
