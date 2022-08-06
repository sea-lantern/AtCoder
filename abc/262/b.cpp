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
    ll N, M;
    cin >> N >> M;

    VVI uv(N, VI(N));

    REP(i, M) {
        ll u, v;
        cin >> u >> v;
        uv[u-1][v-1] = true;
        uv[v-1][u-1] = true;
    }

    ll cnt = 0;

    for(ll a = 0; a < N; a++) for(ll b = a + 1; b < N; b++) for(ll c = b + 1; c < N; c++) {
        if(uv[a][b] && uv[b][c] && uv[c][a]) cnt++;
    }
    
    OUT(cnt);
}