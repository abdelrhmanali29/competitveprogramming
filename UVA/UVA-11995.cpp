#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long int ll;
typedef vector<ll>vl;
typedef long double ld;
#define boom main
#define cn(n)  scanf("%d", &n)
#define FileIn(file) freopen(file".in", "r", stdin)
//freopen("morty.in" , "r" , stdin);
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
//3.141592653589793238462643 38327950288419716939937510582097494459;
int dx[]= {0, -1, -1, -1, 0, 1, 1,  1};
int dy[]= {-1, -1,  0,  1, 1, 1, 0, -1};
const ld EPS = 1e-9, PI = 3.14159;

const long long N = 500 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;
ll countBits(ll number)
{
    return (ll)log2(number)+1;
}

ll convert(string s)
{
    ll value = 0;
    int indexCounter = 0;
    for(int i = s.length()-1; i >= 0; i--)
    {

        if(s [i] == '1')
        {
            value += pow(2, indexCounter);
        }
        indexCounter++;
    }
    return value;
}
string s;
ll n;
    int ans ;
void countOnes(ll sz)
{

    int cont = 0;
    rep(i ,countBits(n))
    {
		if(countBits(n) == s.size())return;
         if(n & 1){
		i--;
		ans++;
         }
		n >>= 1;
    }
    return;
}

int boom(void)
{

	int n;
	while(cn(n) != EOF){
		queue<int> q;
		priority_queue<int> pq;
		stack<int> st;
		int qn = 0 , stn = 0 , pqn = 0 , m =0;
		rep(i , n){
		   int x , y;
		   cn(x);
		   cn(y);
		   if(x == 1){
			st.push(y);
			//stn++;
			pq.push(y);
			//pqn++;
			q.push(y);
			//qn++;
		   }
		   else{
				++m;
			if(!st.empty() &&st.top() == y)st.pop() , ++stn;
			if(!q.empty() && q.front() == y)q.pop() , ++qn;
			if(!pq.empty() && pq.top() == y)pq.pop(), ++pqn;
		   }
		}
		 if((pqn == m && qn == m) ||
			(stn ==m && qn == m) ||
			(stn == m && pqn == m))printf("not sure\n");
		else if(stn == m)printf("stack\n");
		else if(qn == m)printf("queue\n");
		else if(pqn == m) printf("priority queue\n");
		else printf("impossible\n");

	}
}
