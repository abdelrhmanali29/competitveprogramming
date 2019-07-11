#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a,b,c=0;
    cin>>a>>b;
    int m [1001];
    for(int i=0;i<a;i++){
        cin>>m[i];
        if(m[i]>b)
            c+=2;
        else
            c++;
    }
    cout<<c<<endl;













    return 0;
}
