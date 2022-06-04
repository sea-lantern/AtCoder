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
    ll N, M;
    cin >> N >> M;

    if(M < 2LL << 60 && 60 < N){
        OUT("0");
        return 0;
    }

    VVI dp(N, VI(60));
    ll tmp = 2;
    REP(i, 60){
        if(M < tmp - 1){
            dp[0][i] = max(0LL, M + 1 - tmp / 2);
            if(0 < i) dp[0][i] += dp[0][i-1];
        } else {
            dp[0][i] = tmp - 1;
        }
        dp[0][i] %= MOD;
        tmp *= 2;
    }

    REP(i, N-1){
        for(ll j = i + 1; j < 60; j++){
            dp[i+1][j] = (MOD - dp[0][j-1] + dp[0][j]) * dp[i][j-1];
            dp[i+1][j] %= MOD;
        }

        REP(j, 60-1){
            dp[i+1][j+1] += dp[i+1][j];
            dp[i+1][j+1] %= MOD;
        }
    }
    
    OUT(dp[N-1][59]);
}