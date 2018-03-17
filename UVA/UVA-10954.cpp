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
while(1){
int n;
cin>>n;
if(n==0)return 0;
priority_queue<int, vector<int>, greater<int> >p;
while(n--){int x;
cin>>x;
p.push(x);}

int a=p.top(),b=0,sum=0;
while(p.size()!=1){
    p.pop();
    b=p.top();
    sum+=(a+b);
    p.push(a+b);
    p.pop();
    a=p.top();
}
cout<<sum<<fn;
}



return 0;}
