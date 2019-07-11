#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5, M = 2e6 + 5, OO = 0x3f3f3f3f;

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
	head[f] = ne++;
}

void init(){
	memset(head+1, -1, n*sizeof head[0]);

	ne = 0;
}

int visted[N], recStack[N];

bool isCyclic(int u){
    if(!visted[u] ){
    visted[u] = 1;
    recStack[u] = 1;

    for(int k = head[u]; ~k; k = nxt[k]){
        int v = to[k];
        if(visted[v] && !isCyclic(v))
            return 0;
        else if(!recStack[v])
            return 0;
    }
    }
    recStack[u] = 0;
    return 1;
}

int main(){
    init();
    scanf("%d %d", &n, &m);
    for(int i=0 ;i<m; i++){
        scanf("%d %d", &a, &b);
        addEdge(a , b);
    }
for(int i=1 ;i<n ; ++i)
    if(!isCyclic(i)){
    printf("Acyclic Graph!\n");
        break;}
else{
        printf("Cyclic Graph!\n");
    break;
    }


return 0;}


