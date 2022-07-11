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
    ll N, K;
    cin >> N >> K;

    VVI T(5, VI(K));
    REP(i, N) REP(j, K) cin >> T[i][j];

    REP(k1, K) REP(k2, K) REP(k3, K) REP(k4, K) REP(k5, K) {
        if(!(T[0][k1] ^ T[1][k2] ^ T[2][k3] ^ T[3][k4] ^ T[4][k5])) {
            OUT("Found");
            return 0;
        }
    } 
    
    OUT("Nothing");
}