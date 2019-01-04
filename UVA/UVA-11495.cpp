#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstring>
#include<stdio.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long int ll;
typedef vector<ll>vl;
typedef long double ld;
#define boom main
#define cn(n)  scanf("%d", &n)
#define cnl(n)  scanf("%lld", &n)
#define FileIn(file) freopen(file".in", "r", stdin)
//freopen("morty.in" , "r" , stdin);
#define FileOut(file) freopen(file".out", "w", stdout)
#define F(i, a, b) for (int i=a; i<=b; i++)
#define rep(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define bit(n) (1<<(n))
#define   fn           "\n"
//#define PI  3.14159265358979323846
void Abdo()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll countBits(ll number)
{
    return (ll)log2(number)+1;
}
//3.14159265358979323846264338327950288419716939937510582097494459;
int dx[]= {0, -1, -1, -1, 0, 1, 1,  1};
int dy[]= {-1, -1,  0,  1, 1, 1, 0, -1};
const ld EPS = 1e-9, PI = 3.14159;
const long long N = 2e5 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;
ll ans = 0;
void merge(int a[] , int l , int r){
	int ni = ((l+r)/2)+1;
	int nj = r+1;
	int s = l;
	int * arr = new int[r-l+1];
	r = ni;
	int k = 0;
	while(l < ni && r <nj){
		if(a[l]<=a[r])arr[k++] = a[l++];
		else{
			arr[k++] = a[r++];
			ans += (ni-l);
		}
	}
	while(l < ni)arr[k++] = a[l++];
	while(r < nj)arr[k++] = a[r++];
	for(k = 0; s<nj; s++, k++)
		a[s] = arr[k];

	  //  delete [] arr;
}

void mergeSort(int arr[] , int l ,int r){
	if(l<r){

		mergeSort(arr , l ,(l+r)/2);
		mergeSort(arr , ((l+r)/2)+1, r);
		merge(arr , l ,r);
	}



}

int arr[N];
int boom(void)
{


		int n;
	while(cn(n) , n){

		rep(i , n){
		int x;
		cn(x);
		arr[i] = x;
		}
		ans = 0;
		mergeSort(arr ,0, n-1);
		if(ans %2 == 0)
		printf("Carlos\n");
		else printf("Marcelo\n");

	}
}
