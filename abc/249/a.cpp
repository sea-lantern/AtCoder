#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
//constexpr ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int t = X;
    int d1 = 0;
    while(0 < t){
        if(A <= t){
            d1 += A * B;
            t -= A;
        }else{
            d1 += t * B;
            t = 0;
        }
        t -= C;
    }

    t = X;
    int d2 = 0;
    while(0 < t){
        if(D <= t){
            d2 += D * E;
            t -= D;
        }else{
            d2 += t * E;
            t = 0;
        }
        t -= F;
    }

    if(d1 < d2) OUT("Aoki");
    else if(d2 < d1) OUT("Takahashi");
    else OUT("Draw");
}