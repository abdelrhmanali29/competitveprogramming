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
#define  all(v)         ((v).begin()),((v).end())
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
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    if(s.size()==3){
        if(s[0]=='o'&&s[1]=='n'||s[1]=='n'&&s[2]=='e'||s[2]=='e'&&s[0]=='o'){
            cout<<1<<endl;
            continue;}
        else if(s[0]=='t'&&s[1]=='w' ||s[1]=='w'&&s[2]=='o' ||s[2]=='o'&&s[0]=='t' ){
            cout<<2<<endl;
            continue;}
    }
    else if(s[0]=='t'||s[1]=='h'||s[2]=='r'||s[3]=='e'||s[4]=='e'){
        cout<<3<<endl;
        continue;}
}










return 0;}
