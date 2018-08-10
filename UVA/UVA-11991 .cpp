/*
TASK: comehome
LANG: C++11
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5, M = 1e6 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-9;
vector<vector<int> >v;
int n, m;
int main(){


while(scanf("%d %d", &n, &m) !=EOF){
    v.assign(1000000, vector<int>());

    for(int i=1; i<=n; ++i){
        int c;
        scanf("%d",&c);
        v[c].push_back(i);
    }


    while(m--){
    int a,b;
    scanf("%d %d",&a , &b);
    if(a-1 < v[b].size())
    printf("%d\n",v[b][a-1]);
    else
    printf("0\n");

    }
}

	return 0;
}

