
#include <bits/stdc++.h>

using namespace std;
#define FileIn(file) freopen(file".in", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
typedef long long ll;
void Abdo()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
const int N = 1e5 + 5, M = 1e6 + 5, OO = 0x3f3f3f3f;
const double EPS = 1e-9;


int t, x, n;
vector<int> v;
void solve(int level=1)
{
    if(level == ceil(log2(n))+1) return;
    solve(level+1);
    v.push_back(level);
    solve(level+1);


}
int main()
{
    string s;
    while(cin>>s){
    int m1=0, m2=0, c1=0 , c2=0;
    for(int i=0; i<s.size() ; i+=2)
    {
        if(s[i] >= 'a' && s[i] <= 'z')m1++;
        else c1++;
    }
    for(int i=1; i<s.size(); i+=2)
    {
        if(s[i] >= 'a' && s[i] <= 'z')m2++;
        else c2++;
    }

    int ans=m1+c2;
    ans=min(ans, (m2+c1));
    cout<<ans<<endl;
   }
    return 0;
}

