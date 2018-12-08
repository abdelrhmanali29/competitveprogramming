#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 2e4 + 5, M = 2e4 + 5, OO = 0x3f3f3f3f;
 
struct state{
	int m, parId, d;
};
vector<state> q;
int vis[N], vid;
int m;
 
void BFS(){
	++vid;
	q.clear();
	q.push_back({1, -1, 1});
	vis[1] = vid;
	if(m == 1)	return;
	for(int k = 0 ; k < q.size() ; ++k){
		for(int i = 0 ; i < 2 ; ++i){
			int nm = (q[k].m*10 + i)%m;
			if(vis[nm] == vid)	continue;
			vis[nm] = vid;
			q.push_back({nm, k, i});
			if(!nm)	return;
		}
	}
}
 
void print(int i){
	if(i)	print(q[i].parId);
	printf("%d", q[i].d);
}
 
int t;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &m);
		BFS();
		print(q.size()-1);
		puts("");
	}
}
 
