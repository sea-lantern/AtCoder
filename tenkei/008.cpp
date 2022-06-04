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
constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N;
    cin >> N;

    string S;
    cin >> S;

    string key = "atcoder";
    VVI dp(N+1, VI(8, 0));

    REP(i, N+1) dp[i][0] = 1;
    
    REP(i, N){
        REP(j, 7){
            dp[i+1][j+1] = dp[i][j+1];
            if(S[i] == key[j]) dp[i+1][j+1] = (dp[i+1][j+1]+dp[i][j])%MOD;
        }
    }
    
    OUT(dp[N][7]);
}