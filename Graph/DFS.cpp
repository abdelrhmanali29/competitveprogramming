#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 2e4 + 5, M = 2e6 + 5, OO = 0x3f3f3f3f;
 
int ne, head[N], nxt[M], to[M];
int n, m;
pair<int, int> A[M];
int vis[N];			//0 = not visited, -1 = under-processing, 1 = finished processing
vector<int> ans;
 
void init(){
	memset(head+1, -1, n*sizeof head[0]);
	ne = 0;
}
 
void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	head[f] = ne++;
}
 
bool DFS(int u){
	if(vis[u])	return vis[u] == 1;
	vis[u] = -1;
	for(int k = head[u] ; ~k ; k = nxt[k]){
		int v = to[k];
		if(!DFS(v))	return 0;
	}
	vis[u] = 1;
	ans.push_back(u);
	return 1;
}
 
int main(){
	scanf("%d %d", &n, &m);
	init();
	bool f = 1;
	for(int i = 0 ; i < m ; ++i)
		scanf("%d %d", &A[i].first, &A[i].second);
	sort(A, A+m);
	for(int i = 0 ; i < m ; ++i)
		addEdge(A[i].first, A[i].second);
	for(int i = n ; i >= 1 ; --i)
		if(!vis[i])
			if(!DFS(i))	return puts("Sandro fails."), 0;
	for(int i = n-1 ; ~i ; --i)
		printf("%d%c", ans[i], " \n"[!i]);
	return 0;
}
-----------------------



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