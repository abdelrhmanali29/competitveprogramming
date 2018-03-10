#include <bits/stdc++.h>
#define   fn           "\n"
#define  all(v)         ((v).begin()),((v).end())
#define  sz(v)	        ((int)(v).size())
#define	 clr(v,d)       memset(v,d,sizeof(v))
#define  lp(i,n)        for(int i=0; i<n; i++)
#define  lpi(i,j,n)     for(int i=j; i<n; i++)
#define  lpd(i,j,n)     for(int i=j; i>=n; i--)
#define PI  3.14159265358979323846
const double E = 1e-12;
typedef  long long ll;
using namespace std;
//long long fast_power(long long n, long long m){
//	if (m == 0)
//		return 0;
//	if (m == 1)
//		return n;
////	long long x = fast_power(n, m / 2) % mod;
////	x = (x*x) % mod;
//	if (m % 2 != 0)
//		x *= n;
//	x %= mod;
//	return x;
//}
//string convert_string(int x){
//    stringstream ss;
//    string s;
//    ss<<x;
//    s=ss.str();
//    return s;
//}
//long long convert_long(string s){
//    stringstream ss(s);
//    long long x;
//    ss>>x;
//    return x;
//}
//void capital(string &n){
//	for (int i = 0; i < n.size(); i++)
//		if (n[i] >= 'a'&&n[i] <= 'z')
//			n[i] -= 32;
//}
//void small(string &n){
//	for (int i = 0; i < n.size(); i++)
//		if (n[i] >= 'A'&&n[i] <= 'Z')
//			n[i] += 32;
//}
//bool palindrome_num(int n){
//    string s;
//	//s=to_srting(n);
//	string x=s;
//	reverse(x.begin(),s.end());
//	if(x==s)
//        return true;
//    return false;
//}
//bool palindrome_str(string n){
//	string s=n;
//	reverse(s.begin(),s.end());
//	if (s == n)
//		return true;
//	return false;
//}
//int divisor(int n){
//	int r=0,x=sqrt(n),ar[10000],sum=0;
//	if (x*x==n)
//		ar[r++]=x;
//	for (int i = 1; i <= x; i++)
//		if (n%i == 0)
//			ar[r++]=i,ar[r++]=n/i;
//    for(int i=0;i<r;i++)
//        if(prime(ar[i]))
//            sum+=ar[i];
//    return sum;
//}
//bool prime(int n){
//	if (n == 1)
//		return false;
//	for (long long i = 2; i*i <= n; i++)
//		if (n%i == 0)
//			return false;
//	return true;
//}
//int gcd(int a, int b){
//	if (b == 0)
//		return a;
//	return gcd(b, a%b);
//}
////long double fact(long double n){
//	long double f = 1;
//	for (int i = 1; i <=n; i++)
//		f *= i;
//	return f;
//}
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

ll n;
cin>>n;
while(n--){
    ll x,c,z=0;
    cin>>x>>c;
    vector<ll>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    for(int i=0;i<(1<<x);i++){
        ll s=0;
        for(int j=0;j<x;j++){
            s+=(bool((1<<j)&i)*v[j]);
        }
        if(s==c){
            cout<<"Yes"<<fn;
            z=1;
            break;
        }
    }
    if(!z)cout<<"No"<<fn;
}

return 0;}
