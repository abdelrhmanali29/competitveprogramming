#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<stack>
#include<queue>
#include<sstream>
#include<bitset>
#include<cstdio>
#include<stdio.h>
#include<cstring>
#include <stdio.h>
#include <math.h>
#include <cmath>
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
void file(){
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
void Abdo(){
        std::ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
    }


bool bit(int i,int j){
return (i&(1<<j));}
#define datatype unsigned long int
int main() {
Abdo();

map<string, datatype> map;

    datatype c = 1;

    string st = "0";

    for (int i = 0; i < 26; i++) {

        st[0] = i + 'a';

        map[st] = c++;

    }

    st = "00";

    for (int i = 0; i < 26; i++) {

        st[0] = i + 'a';

        for (int j = i + 1; j < 26; j++) {

            st[1] = j + 'a';

            map[st] = c++;

        }

    }

    st = "000";

    for (int i = 0; i < 26; i++) {

        st[0] = i + 'a';

        for (int j = i + 1; j < 26; j++) {

            st[1] = j + 'a';

            for (int k = j + 1; k < 26; k++) {

                st[2] = k + 'a';

                map[st] = c++;

            }

        }

    }

    st = "0000";

    for (int i = 0; i < 26; i++) {

        st[0] = i + 'a';

        for (int j = i + 1; j < 26; j++) {

            st[1] = j + 'a';

            for (int k = j + 1; k < 26; k++) {

                st[2] = k + 'a';

                for (int l = k + 1; l < 26; l++) {

                    st[3] = l + 'a';

                    map[st] = c++;

                }

            }

        }

    }

    st = "00000";

    for (int i = 0; i < 26; i++) {

        st[0] = i + 'a';

        for (int j = i + 1; j < 26; j++) {

            st[1] = j + 'a';

            for (int k = j + 1; k < 26; k++) {

                st[2] = k + 'a';

                for (int l = k + 1; l < 26; l++) {

                    st[3] = l + 'a';

                    for (int m = l + 1; m < 26; m++) {

                        st[4] = m + 'a';

                        map[st] = c++;

                    }

                }

            }

        }
    }



    while (cin >> st)
        cout << map[st] << endl;

return 0;}
