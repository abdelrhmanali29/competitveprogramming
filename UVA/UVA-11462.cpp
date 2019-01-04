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
const long long N = 2e6 + 5, M = 1e5 +5, OO = 0x3f3f3f3f, MOD = 1e9+7;
int arr[N];
void Merge(int arr[] , int l ,int mid , int r){
	
	int n1 = mid - l + 1;
	int n2 = r -mid;

	int L[n1] , R[n2];

	rep(i , n1)L[i] = arr[l+i];
	rep(i , n2)R[i] = arr[mid+i+1];

	int i = 0;
	int j = 0;
	int k = l;

	while(i < n1 && j < n2){
		if(L[i] <= R[j]) arr[k++]=L[i++];
		else arr[k++] = R[j++];
	}
	while(i < n1)
		arr[k++] = L[i++];
	while(j < n2)
		arr[k++] = R[j++];
}



void mergeSort(int arr[] , int l , int r){
	if(l < r){

		int mid = (l+r)/2;

		mergeSort(arr , l , mid);
		mergeSort(arr , mid+1 , r);

		Merge(arr , l , mid , r);

	}

}




int boom(void)
{

	int n;
	while(cn(n)  , n){
		memset(arr , 0 , sizeof(arr));
		rep(i , n){int c;
		cn(c);
		arr[i] = c;}
          mergeSort(arr , 0 , n-1);
          printf("%d" , arr[0]);
          F(i ,1 , n-1)printf(" %d", arr[i]);
          printf("\n");

	}
}
