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
ll gcd(ll a, ll b){ if (b == 0){ return a; }return gcd(b, a % b); }
void Abdo(){std::ios_base::sync_with_stdio(0);
            cin.tie(NULL);
            cout.tie(NULL);}
const long long   N = 2e5 + 5, M = 1e5 +5, OO = 0x3f3f3f3f;
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;

int dx[]={0 , -1, -1, -1, 0, 1, 1,  1};
int dy[]={-1, -1,  0,  1, 1, 1, 0, -1};

int main()

{

            string arr = "qwertyuiopasdfghjkl;zxcvbnm,./";
                 char  c;
                cin>>c;
                string s ;
                cin>>s;
                if(c == 'R'){
                    for(int i=0; i<s.size(); i++){
                            int idx = -1;
                        for(int j = 0; j<30; j++)
                            if(arr[j] == s[i]) {
                                    idx = j ;
                                    break;}
                                    char b=arr[idx];
                                    idx--;
                        cout<<arr[idx];

                    }
                }
             else if(c == 'L'){
                    for(int i=0; i<s.size(); i++){
                            int idx = -1;
                        for(int j = 0; j<30; j++)
                            if(arr[j] == s[i]) {
                                    idx = j ;
                            break;}
                        cout<<arr[++idx];

                    }
                }
                cout<<endl;
return 0;

}
