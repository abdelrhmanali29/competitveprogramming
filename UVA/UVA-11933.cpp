#include <bits/stdc++.h>
//#inclde<bitset>
#define   fn           "\n"
#define  all(v)         ((v).begin()),((v).end())
#define  sz(v)	        ((int)(v).size())
#define	 clr(v,d)       memset(v,d,sizeof(v))
#define  lp(i,n)        for(int i=0; i<n; i++)
#define  lpi(i,j,n)     for(int i=j; i<n; i++)
#define  lpd(i,j,n)     for(int i=j; i>=n; i--)
#define PI  3.14159265358979323846
const double E = 1e-12;
typedef  long long ll;
using namespace std;


void file(){
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
void Abdo(){
        std::ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
    }

int main() {
Abdo();


while(1){
long long x;
cin>>x;
if(x==0)return 0;
bitset<100>s(x);
bitset<100>a;
bitset<100>b;
int c=-1;
for(int i=0;i<s.size();i++){
    if(s[i]==1){int f=i%2;
        if(c!=-1){
            b.set(i,1);c=-1;
            a.set(i,0);
        }
        else{
            a.set(i,1);
            b.set(i,0);
            c=1;
        }
    }
    else{
        b.set(i,0);
        a.set(i,0);

    }
}
ll aa=a.to_ulong();
ll bb=b.to_ulong();
cout<<aa<<" ";
cout<<bb<<fn;
}
return 0;}
