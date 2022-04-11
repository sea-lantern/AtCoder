#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N;
    cin >> N;

    VVI dp(N, VI(9, 0));

    REP(i, 9) dp[0][i] = 1;

    REP(i, N-1){
        REP(j, 9){
            dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % MOD;
            if(j + 1 < 9) dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j]) % MOD;
            if(0 <= j - 1) dp[i+1][j-1] = (dp[i+1][j-1] + dp[i][j]) % MOD;
        }
    }

    ll ans = 0;
    REP(i, 9) ans = (ans + dp[N-1][i]) % MOD;
    
    OUT(ans);
}