#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, M = 2e5 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;
typedef     pair<int,int>       ii;

int head[N] , nxt[M] , to[M] , cst[M] , ne , res[N];
int n , m , a , b , c;

void addEdge(int f,int t,int c){
    nxt[ne]=head[f];
    to[ne]=t;
    cst[ne]=c;
    head[f]=ne++;
}

void addBiEdge(int a , int b , int c){
    addEdge(a , b , c);
    addEdge(a , b , c);
}
void init(){
memset(head , -1 , sizeof head);
ne=0;
}
vector<int> vb;
int dis[N] ,par[N] ;

bool Dijkstra(int src, int tr){
    fill(dis, dis+n+1, OO);
    priority_queue<ii> q;
    q.push(ii(0,src));
    dis[src]=0;
    par[src]=-1;
    while(!q.empty()){
        int d=-q.top().first , u=q.top().second;
        q.pop();
        if(u==tr) return true;

        for(int k=head[u]; ~k; k=nxt[k]){
            int v=to[k], c=cst[k];
            int dd =d+c;
            if(dis[v] > dd){
                dis[v]=dd;
                par[v]=u;
                q.push(ii(-dd, v));
            }

        }

    }
return false;
}

int main(){
	init();
	scanf("%d %d",&n ,&m);
	while(m--){
        scanf("%d %d %d", &a , &b , &c);
        addBiEdge(a , b , c);
	}

if(Dijkstra(1, n)){
vector<int> path;

        for(int v = n; v != -1; v = par[v]) path.push_back(v);

        for(int i = path.size()-1; i > 0; --i) printf("%d ", path[i]);

        printf("%d\n", path[0]);
    }
else  printf("-1\n");

	return 0;
}
