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


bool bit(int i,int j){
return (i&(1<<j));}

int main() {
Abdo();
ll n,l,r,x,res=0,a[30]={0};
cin>>n>>l>>r>>x;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<(1<<n);i++){
     long long sum = 0, mn = 1000000000, mx = -1000000000;
     for(int j=0;j<n;j++){
        if(bit(i,j)){
              sum += a[j];
                if(mn > a[j]) mn = a[j];
                if(mx < a[j]) mx = a[j];
        }
     }
       if(sum >= l && sum <= r && mx - mn >= x) res++;
}
cout<<res<<fn;
return 0;}
