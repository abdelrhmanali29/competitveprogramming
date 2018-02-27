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







   int a,n;
   cin>>n>>a;
   int a1[1002],s[1002]={0};
   for(int i=1;i<=n;i++){
    cin>>a1[i];
   }
   for(int i=1;i<=n;i++){
        if(a1[i]==1)
        s[abs(a-i)]++;
        else{
            s[abs(a-i)]--;
        }

    }int c=0;
   for(int i=0;i<n;i++){
    if(s[i]>0)
        c+=s[i];
   }
   cout<<c<<endl;







    return 0;
    }
