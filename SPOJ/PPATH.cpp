#include <bits/stdc++.h>
 
using namespace std;
const int N = 1e4 + 5, OO = 0x3f3f3f3f, MOD = 1000000007;
const double EPS = 0.000000001;
 
int n, a, b;
vector<int> primes;
bitset<N> isComp;
vector<int> adj[N];
int dis[N];
 
void sieve(){
  isComp[0] = isComp[1] = 1;
  primes.reserve(10000);
  for(long long i = 2 ; i <= N ; ++i){
    if(!isComp[i]){
      for(long long j = i*i ; j <= N ; j+=i)
        isComp[j] = 1;
      if(i>1000)	primes.push_back(i);
    }
  }
}
 
int BFS(int src, int snk){
  queue<int> q;
  q.push(src);
  dis[src] = 0;
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int ch : adj[p]){
      if(dis[ch] == OO){
        q.push(ch);
        dis[ch] = dis[p]+1;
      }
      if(ch == snk)	return dis[ch];
    }
  }
  return -1;
}
 
int main(){
  //freopen("i.in", "rt", stdin);
  //freopen("o.out", "wt", stdout);
  cin.sync_with_stdio(0);
  sieve();
  for(int p : primes){
    int base = 1;
    for(int q = 0 ; q < 4 ; ++q){
      int x = (p/(10*base)) *(10*base);
      x += (p%base);
      for(int i = 0 ; i <= 9 ; ++i)
        if(x+i*base != p && !isComp[x+i*base])	adj[p].push_back(x+i*base);
      base *= 10;
    }
  }
  cin >> n;
  while(n--){
    cin >> a >> b;
    memset(dis, OO, sizeof dis);
    int ans = BFS(a, b);
    if(ans>=0)	printf("%d\n", ans);
    else	puts("Impossible");
  }
  return 0;
}  
