#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
constexpr ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

ll ans = 0;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, M;
    cin >> N >> M;

    VI P(N);
    REP(i, N) {
        ll x;
        cin >> x;
        P[i] = x - 1;
    }

    VI D(N);

    VI PW(N + 10);
    PW[0] = 1;
    REP(i, N + 5) PW[i+1] = (PW[i] * M) % MOD;

    REP(i, N) {
        if(D[P[i]] == 0) D[P[i]] = M;
        if(D[i] == 0){
            ans += (M - 1) * (M - 1) * PW[N - (i + 2)];
            ans = ans % MOD;
            D[i] = M;
        }
    }
    
    OUT(ans);
}