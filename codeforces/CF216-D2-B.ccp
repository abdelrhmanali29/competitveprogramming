#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<set>
#include <string.h>

using namespace std;

const int  N = 1e5 + 5, M = 2e5 +5, INF = 0x3f3f3f3f;
const double EPS = 1e-9;
int n, m;
int ne, head[N], nxt[M],to[M];
int vis[N];
void addEdge(int f, int t)
{
    nxt[ne] = head[f];
    to[ne] = t;
    head[f] = ne++;
}
void addBiEdge(int a, int b)
{
    addEdge(a, b);
    addEdge(b, a);
}
void init()
{
    memset(head, -1, sizeof head);
    ne =0;
}
enum state {path = 0, cycle = 1};

state DFS(int u, int per,int &cnt)
{
    if(vis[u]) return cycle;
    vis[u] = 1;

    for(int k = head[u]; ~k; k = nxt[k])
    {
        int v = to[k];
        if(v != per){
        ++cnt;
        if(DFS(v, u,cnt) == cycle) return cycle;
        }
    }
    return path;
}

int main()
{   init();
    scanf("%d %d",&n, &m);
    while(m--)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        addBiEdge(a, b);
    }
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            int cnt =0;
            state s = DFS(i, -1,cnt);
            if(s == cycle)
                ans += (cnt % 2 == 1);
        }

    }
    if((n - ans) % 2 == 1)ans++;
    printf("%d\n",ans);

    return 0;
}
