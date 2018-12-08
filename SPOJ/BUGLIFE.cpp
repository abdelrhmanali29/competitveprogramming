#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 2e4 + 5, M = 2e6 + 5, OO = 0x3f3f3f3f;
 
int ne, head[N], nxt[M], to[M];
int vis[N];
int n, m, a, b;
 
void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	head[f] = ne++;
}
 
void addBiEdge(int a, int b){
	addEdge(a, b);
	addEdge(b, a);
}
 
void init(){
	memset(head+1, -1, n*sizeof head[0]);
	memset(vis+1, -1, n*sizeof vis[0]);
	ne = 0;
}
 
bool DFS(int u, int c){
	if(vis[u]!=-1)	return c == vis[u];
	vis[u] = c;
	for(int k = head[u] ; ~k ; k = nxt[k]){
		int v = to[k];
		if(!DFS(v, 1-c))	return 0;
	}
	return 1;
}
 
int t;
 
int main(){
	scanf("%d", &t);
	for(int tc = 1 ; tc <= t ; ++tc){
		printf("Scenario #%d:\n", tc);
		bool f = 1;
		scanf("%d %d", &n, &m);
		init();
		for(int i = 0 ; i < m ; ++i){
			scanf("%d %d", &a, &b);
			addBiEdge(a, b);
		}
		int i;
		for(i = 1 ; i <= n ; ++i){
			if(vis[i] == -1){
				if(!DFS(i, 0)){
					printf("Suspicious bugs found!\n");
					break;
				}
			}
		}
		if(i > n)	printf("No suspicious bugs found!\n");
	}
}
