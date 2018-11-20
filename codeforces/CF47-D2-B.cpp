#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstdio>
#include<stdio.h>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long ll;
typedef vector<ll>vl;
typedef long double ld;

#define cn(n)  scanf("%d", &n)
#define FileIn(file) freopen(file".inp", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for (int i=a; i<=b; i++)
#define rep(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.14159265358979323846
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
void Abdo()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
//3.14159265358979323846264338327950288419716939937510582097494459;
int dx[]= {0, -1, -1, -1, 0, 1, 1,  1};
int dy[]= {-1, -1,  0,  1, 1, 1, 0, -1};
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;

const long long   N = 1e5 + 5, M = 1e5 +5, OO = 0x3f3f3f3f;


int main()
{
	char arr[5][5];
	for(int i =1; i<=3; i++)
		for(int j = 1; j <=3; j++)
				cin>>arr[i][j];
	int A = 0 , B = 0 , C = 0;
	for(int i=1; i<=3; i++){
		for(int j =1; j<=3; j++){
			if(arr[i][j] == 'A'){
				if(arr[i][j-1] == '<')A++;
				else if(arr[i][j+1] == '>')A++;
			}
			if(arr[i][j] == 'B'){
				if(arr[i][j-1] == '<')B++;
				else if(arr[i][j+1] == '>')B++;
			}
			if(arr[i][j] == 'C'){
				if(arr[i][j-1] == '<')C++;
				else if(arr[i][j+1] == '>')C++;
			}
		}
	}
	int mx = max(A , max(B , C)) , mn = min(A , min(B ,C));
	if(A && B && C)cout<<"Impossible";
	else if(A == mx && B == mn)cout<<"BCA";
	else if(A == mx && C == mn){cout<<"CBA";}
	else if(B == mx && A == mn){cout<<"ACB";}
	else if(B == mx && C == mn){cout<<"CAB";}
	else if(C == mx && A == mn){cout<<"ABC";}
	else if(C == mx && B == mn){cout<<"BAC";}




return 0;
}
