#include <iostream>

using namespace std;


int main()
{
    string x;
cin>>x;
int c=x.size();
int a[26]={0};
for(int i=0;i<c;i++){
    int v=0;
    v=x[i]-'a';
    a[v]++;
}
    int g=0;
for(int i=0;i<26;i++){
    if(a[i]>0)
    g++;
}



if(g%2==0)
cout<<"CHAT WITH HER!"<<endl;
else
    cout<<"IGNORE HIM!"<<endl;



return 0;
}
