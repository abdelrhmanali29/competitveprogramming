#include <bits/stdc++.h>
using namespace std;
int main(){
	    ios_base::sync_with_stdio(0);cin.tie(0);
	string x,c;
	cin>>x>>c;
	if(c==x)
	cout<<-1<<endl;
	else
	cout<<max(x.size(),c.size())<<endl;
		return 0;
}
