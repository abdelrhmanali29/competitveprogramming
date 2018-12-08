#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 2e4 + 5, M = 2e6 + 5, OO = 0x3f3f3f3f;
 
int ne, head[N], nxt[M], to[M], in[N];
int n, m, a, b;
 
struct cmp{
	bool operator () (const int & a, const int & b) const{
		return a>b;
	}
};
 
void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	in[t]++;
	head[f] = ne++;
}
 
void init(){
	memset(head+1, -1, n*sizeof head[0]);
	ne = 0;
}
vector<int> result;
 
void BFS(){
	priority_queue<int, vector<int>, cmp> q;
	for(int i = 1 ; i <= n ; ++i)
		if(!in[i])	q.push(i);
	while(!q.empty()){
		int u = q.top();
		result.push_back(u);
		q.pop();
		for(int k = head[u] ; ~k ; k = nxt[k]){
			int v = to[k];
			if(!--in[v]){
				q.push(v);
			}
		}
	}
}
 
int main(){
	scanf("%d %d", &n, &m);
	init();
	for(int i = 0 ; i < m ; ++i){
		scanf("%d %d", &a, &b);
		addEdge(a, b);
	}
	BFS();
	if(result.size() != n) printf("Sandro fails.\n");
	else
		for(int i = 0 ; i < result.size() ; ++i)
			printf("%d%c", result[i], " \n"[i==n-1]);
}
