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
int arr[1000010];
int main() {
Abdo();
int x;
cin>>x;
while(x--){
string s;
stack<char> st;
queue<char> q;
cin>>s;
int c=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='(')c++;
    else if(isalpha(s[i])){
        q.push(s[i]);
    }
    else if(s[i]=='+'||s[i]=='/'||s[i]=='*'||s[i]=='-'||s[i]=='^'){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        q.push(st.top());
        st.pop();
        c++;
    }
}
for(int i=0;i<=c;i++){
    cout<<q.front();
    q.pop();
}cout<<fn;}
return 0;}
