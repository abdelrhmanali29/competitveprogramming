#include <iostream>
#include<stdio.h>
using namespace std;
 
const int N = 52 , M = 104, INF = 0x3f3f3f3f;
const double EPS = 1e-9;
 
int test, n, i, j, k, g[50][50], best, idx, cnt;
char grid[N][N];
void floyd(){
		for(k = 0; k < n; k++) {
			for(cnt = i = 0; i < n; i++) {
				if(k != i && g[k][i] == INF) {
					for(j = 0; j < n; j++) {
						if(i != j) {
							if(g[k][j]!=INF && g[i][j]!=INF) break;
						}
					}
					if(j < n) cnt++;
				}
			}
			if(cnt > best) {
				best = cnt, idx = k;
			}
		}
 
}
 
 
 
int main() {
	//READ("in.txt");
	//WRITE("out.txt");
	int test, n, i, j, k, g[50][50], best, idx, cnt;
	char str[64];
	scanf("%d", &test);
	while(test--) {
		scanf("%s", str);
		for(i = 0; str[i]; i++) g[0][i] = (str[i]=='Y')? 1 : INF;
		for(n = i, j = 1; j < n; j++) {
			scanf("%s", str);
			for(i = 0; str[i]; i++) g[j][i] = (str[i]=='Y')? 1 : INF;
		}
		best = idx = 0;
		for(k = 0; k < n; k++) {
			for(cnt = i = 0; i < n; i++) {
				if(k != i && g[k][i] == INF) {
					for(j = 0; j < n; j++) {
						if(i != j) {
							if(g[k][j]!=INF && g[i][j]!=INF) break;
						}
					}
					if(j < n) cnt++;
				}
			}
			if(cnt > best) {
				best = cnt, idx = k;
			}
		}
		printf("%d %d\n", idx, best);
	}
	return 0;
}
