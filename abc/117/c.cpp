#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i, n) for (ll i = 0; i < (n); i++)
#define ALL(v) v.begin(), v.end()
#define OUT(n) cout << n << "\n"
// constexpr ll MOD=998244353;
// constexpr ll MOD=1000000007;
// constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;

    VI X(M);
    REP(i, M) cin >> X[i];

    sort(ALL(X));

    VI diff(M-1);
    REP(i, M - 1) diff[i] = X[i+1] - X[i];

    sort(ALL(diff));

    ll ans = 0;
    REP(i, M-N){
        ans += diff[i];
    }

    OUT(ans);
}