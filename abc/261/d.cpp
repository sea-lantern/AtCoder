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

    VI X(N+1);
    VI Y(N+1);
    REP(i, N) cin >> X[i];
    REP(i, M) {
        int c;
        cin >> c;
        cin >> Y[c];
    }

    VVI dp(N + 1, VI(N+1));
    REP(i, N) REP(j, i+1){
        dp[i+1][0] = max(dp[i+1][0], dp[i][j]);
        dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + X[i] + Y[j+1]);
    }

    ll ans = 0;
    REP(i, N+1){
        ans = max(ans, dp[N][i]);
    }
    
    OUT(ans);
}