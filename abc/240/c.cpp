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
    int N, X;
    cin >> N >> X;
    
    VVI dp(N+1, VI(X+1));

    dp[0][0] = 1;

    REP(i, N){
        ll a, b; cin >> a >> b;
        REP(j, X){
            if(dp[i][j]){
                if(j + a <= X) dp[i+1][j+a] = 1;
                if(j + b <= X) dp[i+1][j+b] = 1;
            }
        }
    }

    if(dp[N][X]) OUT("Yes");
    else OUT("No");
}