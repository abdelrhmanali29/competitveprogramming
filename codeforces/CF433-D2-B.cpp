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






int main() {
Abdo();




long long n;
cin>>n;
long long a[1000000]={0};
for(int i=1;i<=n;i++){
    cin>>a[i];}
long long cum[1000000]={0};
for(int i=1;i<=n;i++){
    cum[i]=cum[i-1]+a[i];
}
sort(a,a+n+1);
long long cum2[1000000]={0};
for(int i=1;i<=n;i++){
    cum2[i]=cum2[i-1]+a[i];
}
int m;
cin>>m;
while(m--){
    int type,l,r;
    cin>>type>>l>>r;
    if(type==1){
        cout<<cum[r]-cum[l-1]<<"\n";
    }
    else{
        cout<<cum2[r]-cum2[l-1]<<"\n";
    }


}



    return 0;
    }
