
/*
	Counting problem
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-7;

#define lp(k,n)   for(int k=0; k<n; k++)
#define rep(i, v)		for(int i=0;i<sz(v);++i)

void fast()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

int t, n, m;
char g[N][N];
bool visted[N][N];
int dx[]= {0, 0, 1, -1};
int dy[]= {1, -1, 0, 0};

bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m ;
}

void dfs(int i, int j)
{
    if(visted[i][j]) return;

    visted[i][j] =true;
    lp(k, 4)
    {
        int toX= i + dx[k];
        int toY= j + dy[k];
        if(valid(toX, toY) && g[toX][toY] == g[i][j])
            dfs(toX, toY );

    }

}

int c[26];

void conectedcom()
{
    int cnt=0;
    lp(i, n)
    {
        lp( j, m)
        {
            if(!visted[i][j])
            {
                dfs(i, j);
                c[g[i][j] - 'a']++;
            }

        }
    }

}
vector<pair<int, int> >v;
set<pair<int , char> >st;
void print()
{

    lp(k, 26)
    {
        if(c[k])
        {

            v.push_back({c[k] , (char)(k + 'a')});
        }
    }


}



int main()
{
    int cas=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<m; ++j)cin>>g[i][j];
        }
        printf("World #%d\n", cas++);
        conectedcom();
        print();
        sort(v.begin() , v.end());
        printf("%c: %d\n", v[v.size()-1].second ,v[v.size()-1].first);
        for(int i=v.size()-2; i>=0; --i)printf("%c: %d\n",v[i].second , v[i].first);
        memset(c,0,sizeof c);
    }



    return 0;
}





