#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e3+5, M = 1e4, OO = 0x3f3f3f3f;
 
int n, A[N];
int mem[N];
 
int solve(int i){
	int & ret = mem[i];
	if(~ret)	return ret;
	ret = 1;
	for(int pre = 0 ; pre < i ; ++pre){
		if(A[pre] < A[i])
			ret = max(ret, solve(pre)+1);
	}
	return ret;
}
 
void print(int i){
	int ret = solve(i);
	for(int pre = 0 ; pre < i ; ++pre){
		if(A[pre] < A[i])
			if(ret == solve(pre)+1){
				print(pre);
				printf(" %d", A[i]);
				return;
			}
	}
	printf("%d", A[i]);
}
 
int maxi, maxii;
 
int main(){
	scanf("%d", &n);
	memset(mem, -1, sizeof mem);
	for(int i = 0 ; i < n ; ++i)	scanf("%d", A+i);
	for(int i = 0 ; i < n ; ++i){
		int ret = solve(i);
		if(ret > maxi){
			maxi = ret;
			maxii = i;
		}
	}
	printf("%d",maxi);
	puts("");
	return 0;
}
 
