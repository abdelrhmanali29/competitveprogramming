#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <deque>

#define  all(v)         ((v).begine()),((v).end())
#define  sz(v)	        ((int)(v).size())
#define	 clr(v,d)       memset(v,d,sizeof(v))
#define  lp(i,n)        for(int i=0; i<n; i++)
#define  lpi(i,j,n)     for(int i=j; i<n; i++)
#define  lpd(i,j,n)     for(int i=j; i>=n; i--)
#define PI 3.14159265359
const double E = 1e-12;
typedef  long long ll;
typedef  long double ld;
using namespace std;
void file()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
}
void Abdo(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}



int n,m;
char a[101][101];
bool vis[101][101];
int dx8[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int dy8[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dx[]={-1,0,0,1};  //the direction the X that can move;
int dy[]={0,1,-1,0};  //the direction the Y that can move;
string dir[]={ "forth", "right", "left"};
string path="IEHOVA#";
bool valid(int i,int j){return i>=0 && i<n && j>=0 && j<m; }

void dfs(int i,int j){

}
string reverse(string s)
{
	int x = s.length();

	for (int i = 0; i < x/ 2; i++)
	{

		swap(s[i], s[x - i - 1]);
	}
	return s;
}
string toB(int n)
{
    string t;
    while(n!=0)
	{
		t=(n%2==0 ?"0":"1")+t;
		n/=2;
	}
    return t;
}

int prime(long long x){long long i=0;
for(i=2;i<x;i++){
    if(x%i==0)
    return 0;
    }

return 1;
}




int main() {
Abdo();
ll a[200000]={0},s[200000]={0};
int n;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
}
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    s[l]+=-1;
    s[r+1]+=1;
}

for(int i=1;i<=n;i++){
        s[i]+=s[i-1];
}
ll v=0;
//v=count(s+1,s+n+1,>=0);
for(int i=1;i<=n;i++){
    if(s[i]>=0)
        v++;
}




cout<<v<<endl;
for(int i=1;i<=n;i++){
        if(s[i]>=0){
        cout<<a[i]<<" ";}
}
cout<<endl;








return 0;
}
