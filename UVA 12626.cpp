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
int n;
cin>>n;
for(int o=0;o<n;o++){
    string s;
    cin>>s;
    int z=s.size();
    int a=0,r=0,m=0,g=0,I=0,t=0;
    for(int i=0;i<z;i++){
        if(s[i]=='M')
            m++;
       else if(s[i]=='A')
            a++;
       else if(s[i]=='R')
            r++;
       else if(s[i]=='G')
            g++;
       else if(s[i]=='I')
            I++;
       else if(s[i]=='T')
            t++;}

if(a<3||r<2 || m==0||I==0||t==0||g==0){
    cout<<0<<endl;
    continue;}
else{
    a/=3;
    r/=2;
    int sum=min(a,r);
    if(m<sum&&m!=0)
        sum=m;
    if(I<sum&&I!=0)
        sum=I;
    if(g<sum&&g!=0)
        sum=g;
    if(t<sum&&t!=0)
        sum=t;
    cout<<sum<<'\n';
  }

}

    return 0;
    }
