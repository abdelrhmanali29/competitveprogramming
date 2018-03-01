#include <iostream>

using namespace std;


int main()
{
    string s,x;
cin>>x>>s;
int c=x.size();
for(int i=0;i<c;i++){
    x[i]=tolower(x[i]);
    s[i]=tolower(s[i]);
}


int d=0,f=0;

for(int i=0;i<c;i++){
    d+=x[i];
    f+=s[i];
}
if(x==s)
    cout<<0<<endl;
else if(x>s)
    cout<<1<<endl;
else
    cout<<-1<<endl;
/*
if(d==f)
    cout<<0<<endl;
else if(f>d)
    cout<<-1<<endl;
else
    cout<<1<<endl;
*/
return 0;
}
