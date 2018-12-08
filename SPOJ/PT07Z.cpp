#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e4 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
 
int head[N], nxt[M], to[M], ne, n, a, b;
int maxi, node;
 
#define neig(u, e, v) for(int e = head[u], v ; v = to[e], ~e ; e = nxt[e])
 
void init(){
	memset(head, -1, n*sizeof head[0]);
	ne = 0;
}
 
void addEdge(int f, int t){
	nxt[ne] = head[f];
	to[ne] = t;
	head[f] = ne++;
}
 
void addBiEdge(int a, int b){
	addEdge(a, b);
	addEdge(b, a);
}
 
int depth;
 
void DFS(int u, int pe){
	if(depth > maxi){
		maxi = depth;
		node = u;
	}
	++depth;
	neig(u, e, v){
		if(e == pe)	continue;
		DFS(v, e^1);
	}
	--depth;
}
 
int main(){
//	freopen("clocks.in", "rt", stdin);
//	freopen("clocks.out", "wt", stdout);
	scanf("%d", &n);
	init();
	for(int i = 1 ; i < n ; ++i){
		scanf("%d %d", &a, &b);
		addBiEdge(--a, --b);
	}
	DFS(0, -1);
	maxi = 0;
	DFS(node, -1);
	printf("%d\n", maxi);
}
