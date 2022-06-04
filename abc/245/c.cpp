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

    VI A(N), B(N);

    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];

    VVI dp(N, VI(2, 0));

    dp[0][0] = 1;
    dp[0][1] = 1;

    REP(i, N-1){
        if(dp[i][0]){
            if(abs(A[i] - A[i+1]) <= K) dp[i+1][0] = 1;
            if(abs(A[i] - B[i+1]) <= K) dp[i+1][1] = 1;
        }
        if(dp[i][1]){
            if(abs(B[i] - A[i+1]) <= K) dp[i+1][0] = 1;
            if(abs(B[i] - B[i+1]) <= K) dp[i+1][1] = 1;
        }
    }

    if(dp[N-1][0] || dp[N-1][1]) OUT("Yes");
    else OUT("No");
}