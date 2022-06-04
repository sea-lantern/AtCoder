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

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, M, K, S, T, X;
    cin >> N >> M >> K >> S >> T >> X;

    S--;
    T--;
    X--;

    VVI uv(N);
    REP(i, N){
        ll u, v;
        cin >> u >> v;
        uv[u-1].push_back(v-1);
        uv[v-1].push_back(u-1);
    }

    VVI dp0(K+1, VI(N, 0));
    VVI dp1(K+1, VI(N, 0));

    dp0[0][S] = 1;

    REP(i, K){
        REP(j, N){
            for(auto &ame: uv[j]){
                if(ame == X){
                    dp1[i+1][ame] = (dp1[i+1][ame] + dp0[i][j]) % MOD;
                    dp0[i+1][ame] = (dp0[i+1][ame] + dp1[i][j]) % MOD;
                } else {
                    dp0[i+1][ame] = (dp0[i+1][ame] + dp0[i][j]) % MOD;
                    dp1[i+1][ame] = (dp1[i+1][ame] + dp1[i][j]) % MOD;
                }
            }
        }
    }

    OUT(dp0[K][T]);
}