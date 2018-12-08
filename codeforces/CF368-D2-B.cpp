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
int a[(int)(1e6)];
int main() {
Abdo();







 int n,m,x;
    cin >> n >> m;
    int arr[n+1];
    set<int> st;
    for (int i=1 ; i<=n ; i++)
        cin >> arr[i];
    for (int i=n ; i>=1 ; i--)
        st.insert(arr[i]),a[i]=st.size();
    for (int i=0 ; i<m ; i++)
        cin >> x,cout <<a[x] << endl;




    return 0;
    }
