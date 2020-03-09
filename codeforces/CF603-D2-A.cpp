#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int r , g , b;
    cin>>r>>g>>b;
    vector<int> v;
    int ans ;
    v.push_back(r);
    v.push_back(g);
    v.push_back(b);
    sort(v.begin(), v.end());
    int mn = v[0];
    int mx = v[2] , mdl = v[1];
    int x = mn/2 , y = mn-x;
    ans  = min(mx , (mn+mdl));
    if(mn+mdl >= mx){

        ans = (mx+mn+mdl)/2;
    }

    cout<<ans<<endl;
   }

    return 0;
}
